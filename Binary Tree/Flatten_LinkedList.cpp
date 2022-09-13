#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void flatten(TreeNode* root) {
        stack<TreeNode*> s;
        if(root == NULL) return;
        s.push(root);
        
        
        while(!s.empty()){
            TreeNode* curr = s.top();
            s.pop();
            
            if(curr->right) s.push(curr->right);
            if(curr->left) s.push(curr->left);
            
            if(!s.empty()){
                curr->right = s.top();
            }
            curr->left = NULL;
        }
        
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

