#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool path(TreeNode* root, TreeNode* p, vector<TreeNode*> &path1){
        if(root==NULL){
            return false;
        }
        path1.push_back(root);
        if(root == p){
            return true;
        }
        
        if(path(root->left, p, path1) || path(root->right, p, path1)){
            return true;
        }
        path1.pop_back();
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;
        
        if(!path(root, p, path1) || !path(root, q, path2)){
            return NULL;
        }
        int i=0;
        for(i=0;i<path1.size() && i<path2.size();i++){
            if(path1[i] != path2[i]){
                break;
            }
        }
        return path1[i-1];
    }

    // Approach 2 :


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q){
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        if(left == NULL){
            return right;
        }
        if(right == NULL){
            return left;
        }
        else{
            return root;
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

