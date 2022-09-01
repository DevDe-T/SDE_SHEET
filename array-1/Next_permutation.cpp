#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void nextPermutation(vector<int>& a) {
        int n = a.size();
        int idx1,idx2;
        int f = 0;
        for(int i=n-2;i>=0;i--){
            if(a[i] < a[i+1]){
                idx1 = i;
                f=1;
                break;
            }
        }
        if(f==0){
            reverse(a.begin(),a.end());
            return;
        } 
        for(int i=n-1;i>=0;i--){
            if(a[i] > a[idx1]){
                idx2 = i;
                break;
            }
        }
        swap(a[idx1], a[idx2]);
        reverse(a.begin()+idx1+1, a.end());
    }


 int main(){
	vector<int> v = {1,3,4,5,4,3,2};

	nextPermutation(v);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}