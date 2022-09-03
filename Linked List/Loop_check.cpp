#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool hasCycle(ListNode *head) {
        ListNode* s = head;
        ListNode* f = head;
        
        while(s!=NULL && f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s == f){
                return true;
            }
        }
        return false;
        
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

