#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int left = 0;
        int right = n-1;
        int lmax = height[left], rmax = height[right];
        int res=0;
        
        while(left <= right){
            if(height[left] <= height[right]){
                if(height[left] >= lmax) lmax = height[left];
                else res+=lmax - height[left];
                left++;
            }
            else{
                if(height[right] >= rmax) rmax = height[right];
                else res+=rmax - height[right];
                right--;
            }
        }
        return res;

        // ***************
        
        unordered_map<int,int> pre;
        unordered_map<int,int> suff;
        int ht=0, j =0;
        int n = height.size();
        for(int i : height){
            if(i > ht){
                ht = i;
            }
            pre[j] = ht; 
            j++;
        }
        ht = 0;
        
        for(int i=n-1;i>=0;i--){
            if(height[i] > ht){
                ht = height[i];
            }
            suff[i] = ht;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += min(pre[i], suff[i])-height[i];
        }
        return ans;
        
    }
};


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

