#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int diameterOfBinaryTree(TreeNode* root) {
    if(root==NULL) return 0;
    int ld = diameterOfBinaryTree(root->left);
    int rd = diameterOfBinaryTree(root->right);
    int f = Theight(root->left)+Theight(root->right);
    int ans = max(max(ld,rd),f);
    return ans;
}

int Theight(TreeNode* root){
    if(root==NULL) return 0;
    return max(Theight(root->left),Theight(root->right))+1;
}


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

