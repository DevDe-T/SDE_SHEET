#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// SOLUTION 1 : BRUTE FORCE APPROACH : O(N*M)

ListNode* l1 = headA;
ListNode* l2 = headB;

while(l1!=NULL){
        ListNode* l2 = headB;
            while(l2!=NULL){
                if(l1 == l2){
                    return l1;
                }
                l2=l2->next;
            }
            l1=l1->next;
        }
        return NULL;

// SOLUTION 2 : USING HASH MAP : O(N+M)

        ListNode* l1 = headA;
        ListNode* l2 = headB;
map<ListNode*, int> m;
        
        while(l1!=NULL){
            m[l1]++;
            l1=l1->next;
        }
        
        while(l2!=NULL){
            if(m.find(l2) != m.end()){
                return l2;
            }
            l2=l2->next;
        }
        return NULL;

// SOLUTION 3 : FINDING THE DIFFERENCE OF LENGTH OF LISTS : O(N+M)

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* l1 = headA;
        ListNode* l2 = headB;
        
        int c1 = 0, c2 = 0;
        
        while(l1!=NULL){
            c1++;
            l1=l1->next;
        }
        while(l2!=NULL){
            c2++;
            l2=l2->next;
        }
        l1 = headA, l2 = headB;
        if(c1>c2){
            int x = c1-c2;
            while(x--){
                l1=l1->next;
            }
            while(l1!=NULL && l2!=NULL){
                if(l1 == l2){
                    return l1;
                }
                l1=l1->next;
                l2=l2->next;
            }
        }
        else if(c1<c2){
            int x = c2-c1;
            while(x--){
                l2=l2->next;
            }
            while(l1!=NULL && l2!=NULL){
                if(l1 == l2){
                    return l1;
                }
                l1=l1->next;
                l2=l2->next;
            }
        }
        else{
            while(l1!=NULL && l2!=NULL){
                if(l1 == l2){
                    return l1;
                }
                l1=l1->next;
                l2=l2->next;
            } 
            
        }
        return NULL;



int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

