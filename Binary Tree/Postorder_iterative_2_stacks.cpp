#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s1, s2;
        if(root == NULL) return v;
        s1.push(root);
        while(!s1.empty()){
            root = s1.top();
            s1.pop();
            s2.push(root);
            if(root->left){
                s1.push(root->left);
            }
            if(root->right){
                s1.push(root->right);
            }
        }
        
        while(!s2.empty()){
            v.push_back(s2.top()->val);
            s2.pop();
        }
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

