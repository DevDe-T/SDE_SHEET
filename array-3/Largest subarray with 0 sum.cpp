#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        unordered_map<int,int> m;
        int s = 0;
        int maxlen = 0;
        
        for(int i=0;i<n;i++){
            s+= arr[i];
            if(s == 0){
                maxlen = i+1;
            }
            else{
                if(m.find(s) != m.end()){
                    maxlen = max(maxlen, i-m[s]);
                }
                else{
                    m[s] = i;
                }
            }
        }
        return maxlen;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

