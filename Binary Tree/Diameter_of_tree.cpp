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

//T.C : O(N) :-

int height(TreeNode* root, int &diameter){
        if(root == NULL) return 0;
        
        int lh = height(root->left, diameter);
        int rh = height(root->right, diameter);
        diameter = max(diameter, lh+rh);
        return max(lh, rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

