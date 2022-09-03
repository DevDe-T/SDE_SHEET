#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* s = head;
        ListNode* f = head;
        
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        s->next = rev(s->next);
        s=s->next;
        
        
        while(s!=NULL){
            if(head->val != s->val){
                return false;
            }
            s=s->next;
            head=head->next;
        }
        return true;


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* s = head;
        ListNode* f = head;
        
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        s->next = rev(s->next);
        s=s->next;
        
        
        while(s!=NULL){
            if(head->val != s->val){
                return false;
            }
            s=s->next;
            head=head->next;
        }
        return true;