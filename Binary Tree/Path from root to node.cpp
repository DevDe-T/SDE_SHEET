#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool help(TreeNode* A, int B, vector<int> &v){
     if(A == NULL){
         return false;
     }
     v.push_back(A->val);
     if(A->val == B){
         return true;
     }
     if(help(A->left, B, v) || help(A->right, B, v)){
         return true;
     }
    v.pop_back();
    return false;
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> v;
    help(A, B, v);
    return v;
}

int main(){
	
}

