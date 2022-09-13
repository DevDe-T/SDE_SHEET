#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, long long>> q;
        if(!root) return 0;
        int ans = 0;
        q.push({root, 0});
        
        while(!q.empty()){
            int s = q.size();
            int mmin = q.front().second;
            int st=0, en = 0;
            
            for(int i=0;i<s;i++){
                int curr_ind = q.front().second - mmin;
                TreeNode* curr = q.front().first;
                q.pop();
                
                if(i == 0) st = curr_ind;
                if(i == s-1) en = curr_ind;
                
                if(curr->left) q.push({curr->left, (long long)curr_ind*2 + 1});
                if(curr->right) q.push({curr->right, (long long)curr_ind*2 + 2});
            }
            ans = max(ans, en-st+1);
        }
        return ans;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

