#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            return 1/x * myPow(1/x, -(n+1));
        }
        return (n%2 == 0)?myPow(x*x,n/2):x*myPow(x*x, n/2);
    }


int main(){
   
    cout<<myPow(2, -10);
    return 0;
}

