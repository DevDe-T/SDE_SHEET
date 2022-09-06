#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void rec(vector<int>& arr, int ind, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            rec(arr, ind, target-arr[ind],ds, ans);
            ds.pop_back();
        }
        rec(arr, ind+1, target, ds, ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        rec(candidates, 0, target, ds, ans);
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

