#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        for(int i=n-1;i>=0;i--){
            int j = i+1;
            while(j%n!=i and arr[i] >= arr[j%n]){
                j++;
            }
            if(j%n != i){
                ans[i]=arr[j%n];
            }
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

