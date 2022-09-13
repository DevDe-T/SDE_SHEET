#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursive : O(2^N)

int lis(vector<int> &nums, int ind, int prev_ind){
        if(ind == nums.size()){
            return 0;
        }
        
        int len = lis(nums, ind+1, prev_ind);
        if(prev_ind == -1 || nums[ind] > nums[prev_ind]){
            len = max(len, 1+lis(nums, ind+1, ind));
        }
            return len;
    }
    int lengthOfLIS(vector<int>& nums) {
        return lis(nums, 0, -1);
    }


// Memoization : O(N*N)

int lis(vector<int> &nums, int ind, int prev_ind, vector<vector<int>> &dp){
        if(ind == nums.size()){
            return 0;
        }
        if(dp[ind][prev_ind+1] != -1) return dp[ind][prev_ind+1];
        
        int len = lis(nums, ind+1, prev_ind, dp);
        if(prev_ind == -1 || nums[ind] > nums[prev_ind]){
            len = max(len, 1+lis(nums, ind+1, ind, dp));
        }
            return dp[ind][prev_ind+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return lis(nums, 0, -1, dp);
    }




int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

