#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursive : 

 void help(int n, int i, int &ans){
        if(i == n){
            ans++;
            return;
        }
        if(i+1 <= n){
        help(n, i+1, ans);
        }
        if(i+2 <=n){
        help(n, i+2, ans);
    }
    int climbStairs(int n) {
        int ans = 0;
        int i = 0;
        help(n, i ,ans);
        return ans;
    }

// Dynamic :

    int climbStairs(int n) {
        int l = 1;
        int s = 1;
        if(n==1){
            return 1;
        }
        if(n==2){
            return l+s;
        }
        int ans = 0;
        for(int i=n-2;i>=0;i--){
            ans = l+s;
            s = l;
            l = ans;
        }
        return ans;
    }

// Top-down approach :

    int dp[46] = {0};
    int climbStairs(int n) {
        if(n == 1){
            dp[n] = 1;
            return 1;
        }
        if(n == 2){
            dp[n] = 2;
            return 2;
        }
        else if(dp[n] != 0){
            return dp[n];
        }
        
        dp[n] = climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
    


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

