#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* p = dummy;
        
        int c = 0;
        while(list1!=NULL && list2!=NULL){
            int x = list1->val, y = list2->val;
            if(x+y+c > 9){
                int z = (x+y)+c;
                c = z/10;
                ListNode *t = new ListNode(z%10);
                p->next = t;
            }
            else{
                int z = (x+y)+c;
                c = 0;
                ListNode* t = new ListNode(z%10);
                p->next = t;
            }
            p=p->next;
            list1=list1->next;
            list2=list2->next;
        }
        while(list1!=NULL){
            int z = list1->val + c;
            z>9?c=1:c=0;
            ListNode* t = new ListNode(z%10);
            p->next = t;
            p=p->next;
            list1=list1->next;
        }
        while(list2!=NULL){
            int z = list2->val + c;
            z>9?c=1:c=0;
            ListNode* t = new ListNode(z%10);
            p->next = t;
            p=p->next;
            list2=list2->next;
        }
        if(c!=0){
            ListNode* t = new ListNode(c);
            p->next = t;
        }
        return dummy->next;
    }


int main(){
	ListNode* head1;
	ListNode* p1 = new ListNode(7);
	ListNode* p2 = new ListNode(0);
	p1->next = p2;
	ListNode* p3 = new ListNode(6);
	p2->next = p3;

	head1 = p1;

	ListNode* head2;
	
	ListNode* p11 = new ListNode(1);
	ListNode* p22 = new ListNode(2);
	p11->next = p22;
	ListNode* p33 = new ListNode(3);
	p22->next = p33;

	head2 = p11;

	ListNode* ans = addTwoNumbers(head1, head2);

	while(ans!=NULL){
		cout<<ans->val<<" ";
		ans = ans->next;
	}


	

    return 0;
}

