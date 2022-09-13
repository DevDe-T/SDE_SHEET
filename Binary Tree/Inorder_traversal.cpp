#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursive :

    void inorder(TreeNode* root, vector<int> &v){
        if(root == NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
        
    }

// Iterative :

    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> v;
        TreeNode* node = root;
        
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty()) break;
                node = st.top();
                st.pop();
                v.push_back(node->val);
                node = node->right;
            }
        }
        return v;
    }


int main(){
	

    return 0;
}

