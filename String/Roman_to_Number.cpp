#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int romanToInt(string s) {
        map<char,int> m;
        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X', 10});
        m.insert({'L', 50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});
        
        int ans = 0;
        int n = s.size();
        for(int i=0;i<s.size();i++){
            if(i<n && m[s[i+1]] > m[s[i]]){
                ans-=m[s[i]];
            }
            else{
                ans += m[s[i]];
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

