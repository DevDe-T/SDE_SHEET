#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int numOfSubArray(vector<int> &A, int B) {
    int xo = 0, cnt=0;
    unordered_map<int,int> m;
    
    for(auto it : A){
        xo = xo^it;
        
        if(xo == B){
            cnt++;
        }
        if(m.find(xo^B) != m.end()){
            cnt+=m[xo^B];
        }
        m[xo] += 1;
    }
    return cnt;
}


int main(){
	vector<int> v = {1,2,4,4,7,2,4};
	int n = 4;
    
	cout<<numOfSubArray(v, 4);

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    return 0;
}

