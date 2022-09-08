#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> nums){
    int l = 0, h = nums.size()-1;
    while(l<h){
        int m = (l+h)/2;
        if((m%2 == 0 && nums[m] == nums[m+1]) || (m%2 != 0 && nums[m] == nums[m-1])){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return nums[l];
}



 int main(){
	vector<int> v = {1,1,2,2,3,4,4};

    cout<<singleElement(v);

    return 0;
}