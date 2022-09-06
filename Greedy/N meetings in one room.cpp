#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    static bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int cnt;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(start[i], end[i]));
        }
        sort(v.begin(), v.end(), cmp);
        int y = v[0].second;
        cnt = 1;
        for(int i=1;i<n;i++){
            if(v[i].first > y){
                cnt++;
                y = v[i].second;
            }
        }
        return cnt;
    }

int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

