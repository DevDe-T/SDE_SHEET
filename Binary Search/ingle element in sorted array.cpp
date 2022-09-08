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

int singleElement(vector<int> nums){
	int xr = 0;
	for(int i=0;i<nums.size();i++){
		xr =xr^nums[i];
	}
	return xr;
}




int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;

    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

