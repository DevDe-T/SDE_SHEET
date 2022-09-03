#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* rev(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        
        ListNode* p =head;
        int len = 0;
        while(p!=NULL){
            len++;
            p=p->next;
        }
        if(k > len){
            return head;
        }
        else if(k == len){
            return rev(head);
        }
        else{
            ListNode* t=head;
            int num = len/k;
            while(num--){
            p = t;
            ListNode* q = t;
            for(int i=0;i<k-1 && q!=NULL;i++){
                q = q->next;
            }
            t = q->next;
            q->next = NULL;
            dummy->next = rev(p);
            for(int i=0;i<k;i++){
                dummy = dummy->next;
            }
            }
            while(t!=NULL){
                dummy->next = t;
                dummy=dummy->next;
                t=t->next;
            }
            
        }
        return ans->next;
        
    }
};


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

