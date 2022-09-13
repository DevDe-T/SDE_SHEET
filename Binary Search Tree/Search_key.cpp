#include<iostream>
#include<bits/stdc++.h>
using namespace std;

TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        
        if(root->val > val){
            return searchBST(root->left, val);
        }
        if(root->val < val){
            return searchBST(root->right, val);
        }   
        if(root->val == val) return root;
        
        return root;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

