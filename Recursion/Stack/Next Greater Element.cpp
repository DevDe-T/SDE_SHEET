#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        vector<long long> v(n);
        stack<long long> ans;
        // ans.push(-1);
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and s.top() <= arr[i]){
                s.pop();
            }
            long long la = s.empty()?-1:s.top();
            v[i] = la;
            s.push(arr[i]);
        }
        return v;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

