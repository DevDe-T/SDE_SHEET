#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> v;
        if(root == NULL) return v;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            v.push_back(root->val);
            if(root->right){
                st.push(root->right);
            }
            if(root->left){
                st.push(root->left);
            }
        }
        return v;
    }

int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	
    return 0;
}

