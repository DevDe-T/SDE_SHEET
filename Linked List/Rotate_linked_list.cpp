#include<iostream>
#include<bits/stdc++.h>
using namespace std;

ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        ListNode* tail = head;
        if(head==NULL || head->next == NULL) return head;
        while(tail->next!=NULL){
            n++;
            tail=tail->next;
        }
        n++;
        int rot = n-k%n;
        tail->next = head;
        tail = head;
        while(rot-- > 1){
            tail=tail->next;
        }
        head = tail->next;
        tail->next = NULL;
        return head;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

