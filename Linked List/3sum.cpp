#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> v;
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            int target = -arr[i];
            int front = i+1;
            int back = n-1;
            
            while(front < back){
                int sum = arr[front] + arr[back];
                
                if(sum > target){
                    back--;
                }
                else if(sum < target){
                    front++;
                }
                else{
                    vector<int> trip{arr[i], arr[front], arr[back]};
                    v.push_back(trip);
                    
                    while(front<back && arr[front] == trip[1]) front++;
                    while(front<back && arr[back] == trip[2]) back--;
                }
            }
            while(i+1<n and arr[i] == arr[i+1]){
                i++;
            }
        }
        
        return v;
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

