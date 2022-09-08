#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recusion :

void rec(vector<int>& nums, vector<vector<int>> &ans, vector<int>& ds,  int ind){

            ans.push_back(ds);
        
        for(int i=ind;i<nums.size();++i){
            if(i==ind || nums[i] != nums[i-1]){
                ds.push_back(nums[i]);
                rec(nums, ans, ds, i+1);
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        
        rec(nums, ans, ds, 0);
        return ans;
    }


// Bit Manipulation :

vector<vector<int>> subsetsWithDup(vector<int>& nums) { 
        vector<vector<int>> ans;
        int n = nums.size();
        int sub_ct = pow(2,n);
        int i = 0;
        set<vector<int>> s;
        while(i<sub_ct){
            vector<int> v;
            for(int j=0;j<n;j++){
                if(i & 1<<j){
                    v.push_back(nums[j]);
                }
            }
            sort(v.begin(), v.end());
            s.insert(v);
            i++;
        }
        
        for(auto it : s){
            ans.push_back(it);
        }
        
        return ans;
    }



int main(){
	vector<int> v = {1,2,2,3,3};
}

