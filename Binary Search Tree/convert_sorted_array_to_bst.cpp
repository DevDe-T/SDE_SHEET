#include<iostream>
#include<bits/stdc++.h>
using namespace std;

TreeNode* bst(vector<int> &nums, int l, int r){
        if(l>r){
            return NULL;
        }
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = bst(nums, l, mid-1);
        root->right = bst(nums, mid+1, r);
        return root;
    }
    
TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bst(nums, 0, nums.size()-1);
}


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

