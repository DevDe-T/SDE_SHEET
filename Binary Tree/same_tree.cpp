#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL){
            return true;
        }
        if(p==NULL || q==NULL) return false;
        
        if(p->val != q->val){
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

