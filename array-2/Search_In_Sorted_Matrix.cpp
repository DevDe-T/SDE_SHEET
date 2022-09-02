#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int lo = 0;
        int hi = m*n -1;
        
        while(lo <= hi){
            int mid = (lo + (hi-lo)/2);
            if(matrix[mid/m][mid%m] == target){
                return true;
            }
            if(matrix[mid/m][mid%m] > target){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return false;
    }


 int bSearch(vector<int> v, int target){
        int l = 0, r = v.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid] == target) return 1;
            if(v[mid] > target) r=mid-1;
            else l=mid+1;
        }
        return 0;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i = m-1;
        int j = 0;
        
        while(i>=0 && j<n){
            if(matrix[j][i] == target) return true;
            if(matrix[j][i] > target) i--;
            else j++;
        }
        return false;
    }

int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

