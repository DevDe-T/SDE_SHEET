#include<iostream>
#include<bits/stdc++.h>
using namespace std;


ListNode *detectCycle(ListNode *head) {
//         map<ListNode*, int> m;
        
//         while(head!=NULL){
//             if(m.find(head) != m.end()){
//                 return head;
//             }
//             m[head]++;
//             head=head->next;
//         }
//         return NULL;
        
        ListNode* s = head;
        ListNode* f = head;
        ListNode* start = head;
        
        if(head==NULL || head->next==NULL) return NULL;
        
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s==f){
                while(s!=start){
                    s=s->next;
                    start=start->next;
                }
                return start;
            }
        }
        return NULL;
        
    }

int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

