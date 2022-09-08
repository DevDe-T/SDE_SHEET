#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// T.C : n*log2(m*pow(10,d))

double multiply(int n, double num){
    double ans = 1.0;
    for(int i=1;i<=n;i++){
        ans = ans*num;
    }
    return ans;
}

double findNthRootOfM(int n, int m) {
	double low = 1, high = m;
    double eps = 1e-8;
    while(high-low > eps){
        double mid = (high+low)/2.0;
        if(multiply(n, mid) > m){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    return low;
}


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

