#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        int csum = arr[0];
        int osum = arr[0];
        
        for(int i=1;i<n;i++){
            if(csum >= 0){
                csum += arr[i];
            }
            else{
                csum = arr[i];
            }
            if(csum > osum){
                osum = csum;
            }
        }
        return osum;

    }


 int main(){
	vector<int> v = {1,3,-4,5,4,-3,2};

	cout<< maxSubArray(v);
    int n=7;

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
}