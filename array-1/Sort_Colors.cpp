#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void sortColors(vector<int> &arr)
{
    int n = arr.size();
        int l=0,m=0,h=n-1;
        
        while(m<=h){
            switch(arr[m]){
                case 0: swap(arr[m++], arr[l++]);
                    break;
                case 1: m++;
                    break;
                case 2: swap(arr[m], arr[h--]);
                    break;
            }
        }
 }


 int main(){
	vector<int> v = {1,0,1,2,2,0,1};
    int n = 7;
	sortColors(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}