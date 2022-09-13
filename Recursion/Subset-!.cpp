#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Recursion :

void rec(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int ind){
        ans.push_back(ds);
        
        for(int i=ind;i<nums.size();++i){
            ds.push_back(nums[i]);
            rec(nums, ans, ds, i+1);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        rec(nums, ans, ds, 0);
        return ans;
}

//Bit manipulation :

void bitManip(vector<int> nums){
	vector<vector<int> ans;
	int n = nums.size();
	int subset_cnt = pow(2,n), i = 0;

	while(i<subset_cnt){
		vector<int> temp;
		for(int j=0;j<n;j++){
			if(i & 1<<j){
				temp.push_back(nums[j]);
			}
		}
		i++;
		ans.push_back(temp);
	}
	return ans;
}

// Iterative Way :

vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans = {{}};
        
        for(int num : nums){
            int n = ans.size();
            for(int i=0;i<n;i++){
                ans.push_back(ans[i]);
                ans.back().push_back(num);
            }
        }
        return ans;
    }


int main(){
	vector<int> nums = {1,2,3};

	subsets(nums);


}

