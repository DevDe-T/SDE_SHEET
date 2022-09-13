#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
       int ans = nums[0];
       int ma=ans, mi=ans;
       
       for(int i=1;i<nums.size();i++){
           if(nums[i] < 0){
               swap(ma, mi);
           }
           ma = max(ma*nums[i], nums[i]);
           mi = min(mi*nums[i], nums[i]);
           
           ans = max(ans, ma);
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

