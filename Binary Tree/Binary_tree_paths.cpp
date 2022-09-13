#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void help(TreeNode* root, vector<string> &v, string t){
        if(!root->left && !root->right){
            v.push_back(t);
            return;
        }
        
        if(root->left) help(root->left, v, t + "->" + to_string(root->left->val));
        if(root->right) help(root->right, v, t + "->" + to_string(root->right->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        
        help(root, v, to_string(root->val));
        
        return v;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

