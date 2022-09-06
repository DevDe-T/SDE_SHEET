#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        int c = 1, max_count = 0;
        for(int i : s){
            if(s.find(i-1) != s.end()) continue;
            else{
                int start = i;
                int last = nums.size()-1;
                c = 1;
                while(s.find(++start) != s.end()) c++;
                max_count = max(max_count, c);
            }
        }
        return max_count;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    
    cout<<longestConsecutive(v);


    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    return 0;
}

