#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int st, int en){
        while(st<=en){
            if(s[st++] != s[en--]){
                return false;
            }
        }
        return true;
    }
    
    void func(string s, int ind, vector<string> &ds, vector<vector<string>> &ans){
        if(ind == s.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s, ind, i)){
                ds.push_back(s.substr(ind,i-ind+1));
                func(s, i+1, ds, ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        
        func(s, 0, ds, ans);
        return ans;
    }



 int main(){
	vector<vector<string>> v;
    string s = "abccb";
    v = partition(s);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}