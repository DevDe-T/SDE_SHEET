#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int ans = 0;
        unordered_map<char,int> m;
        int n = s.size();
        while(i<n && j<n && i<=j){
            if(m.find(s[j]) == m.end()){
                m[s[j]]++;
                j++;
                ans = max(ans, j-i);
            }
            else{
                m.erase(s[i]);
                i++;
            }
        }
        return ans;
    }



int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

