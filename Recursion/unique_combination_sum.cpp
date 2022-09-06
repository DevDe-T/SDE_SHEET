#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rec(vector<int>& arr, int ind, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            rec(arr, i+1, target-arr[i], ds, ans);
            ds.pop_back();
        }
    }
   
vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        vector<int> ds;
        rec(arr, 0, target, ds, ans);
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

