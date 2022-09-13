#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string help(string s, int i, int j){
        while(i>=0 && j<s.size()){
            if(s[i] != s[j]){
                break;
            }
            i--;
            j++;
        }
        return s.substr(i+1, j-i-1);
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        string largest = "";
        
        for(int i=0;i<n;i++){
            string odd = help(s, i, i);
            if(largest.size() < odd.size()){
                largest = odd;
            }
        }
        for(int i=0;i<n;i++){
            string even = help(s, i, i+1);
            if(largest.size() < even.size()){
                largest = even;
            }
        }
        return largest;
    }


int main(){
	

    return 0;
}

