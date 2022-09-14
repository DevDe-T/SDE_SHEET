#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursion : O(2^N)

 int f(vector<int> &cost, int n){
        if(n <= 1) return cost[n];
        int pick = f(cost, n-1);
        int unpick = f(cost, n-2);
        
        return cost[n] + min(pick, unpick);
    }
        
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        return min(f(cost, n-1), f(cost, n-2));
    }

    // memoization : O(N)

int f(vector<int> &cost, vector<int> &dp, int n){
        if(n <= 1) return dp[n] = cost[n];
        if(dp[n] != -1) return dp[n];
        
        int pick = f(cost, dp, n-1);
        int unpick = f(cost, dp, n-2);
        
        return dp[n] = cost[n] + min(f(cost, dp, n-1), f(cost, dp, n-2));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1, -1);
        return min(f(cost, dp, n-1) , f(cost, dp, n-2));
    }

// Tabulation : O(N)


int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, 0); 
        for (int i = 2; i <= n; i++) {
            int jumpOneStep = dp[i - 1] + cost[i - 1];  
            int jumpTwoStep = dp[i - 2] + cost[i - 2];  
            dp[i] = min(jumpOneStep, jumpTwoStep);
        }
        return dp[n];
    }


// Space : O(1) 

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev = 0, sec_prev = 0; 
        for (int i = 2; i <= n; i++) {
            int jumpOneStep = prev + cost[i - 1];  
            int jumpTwoStep = sec_prev + cost[i - 2]; 
            sec_prev = prev;
            prev = min(jumpOneStep, jumpTwoStep);
            
        }
        return prev;
    }



int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

