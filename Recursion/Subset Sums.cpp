#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rec(vector<int> &arr, vector<int> &ans, int ind, int n, int s){
        if(ind == n) {
            ans.push_back(s);
            return;
        }
        rec(arr, ans, ind+1, n, s+arr[ind]);
        rec(arr, ans, ind+1, n, s);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int> ans;
        rec(arr, ans, 0, n, 0);
        return ans;
    }


😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊😊



int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

