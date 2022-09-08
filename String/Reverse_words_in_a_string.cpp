#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        stack<string> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            string temp = "";
            while(s[i] != ' ' && i<n){
                temp+=s[i];
                i++;
            }
            if(temp!=""){
            st.push(temp);    
            }
        }
        string ans = "";
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
            ans+=" ";
            }
        }
        return ans;
    }



int main(){
	string s = "My name is Harry";

	cout<<reverseWords(s);

    return 0;
}

