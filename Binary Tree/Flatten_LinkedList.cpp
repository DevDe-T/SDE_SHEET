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

TreeNode* prev = NULL;
    void flatten(TreeNode* root) {    
        if(root == NULL) return;
        
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = NULL;
        
        prev = root;

    }


    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while (cur!=NULL)//morris traversal
        {
            if(cur->left!=NULL)
            {
                TreeNode* pre = cur->left;
                while(pre->right!=NULL)
                {
                    pre = pre->right;
                }
                pre->right = cur->right;
                cur->right = cur->left;
                cur->left = NULL;
            }
            cur = cur->right;//will go to cur->left bcoz of cur->right = cur->left; this
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

