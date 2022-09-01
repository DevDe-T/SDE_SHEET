#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n == 1) return intervals;
        // sort(intervals.begin(), intervals.end(), sortbyFirst);
        
        std::sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> v{intervals[0]};
        
        for(int i=1;i<n;i++){
            auto &prev = v.back();
            auto &curr = intervals[i];
            if(prev[1] >= curr[0]){
                prev[1] = max(prev[1], curr[1]);
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return v;
    }

bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return 0;
		sort(intervals.begin(),intervals.end(),comp);
        vector<int> temp = intervals[0];
        int ans = -1;
        for(auto it : intervals){
            if(temp[1] > it[0]){
                ans++;
            }
            else{
                temp = it;
            }
        }
        return ans;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
    int n =7;


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

