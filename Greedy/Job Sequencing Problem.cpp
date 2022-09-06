#include<iostream>
#include<bits/stdc++.h>
using namespace std;



class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool cmp(Job j1, Job j2){
        return j1.profit > j2.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
      
       // your code here
       sort(arr, arr+n, cmp);
       
       // find the maximum deadline and traverse for array
       int maxi = INT_MIN; 
       for(int i=0; i<n; i++)
       maxi = max(maxi,arr[i].dead);
       
       
       // create the array of size (maxi+1) & intialize all index with -1;
       int slot[maxi+1];
       for(int i=1; i<=maxi; i++)
       slot[i] = -1;
       
       int countJobs = 0, jobProfit = 0;
       
       // Iterate for job ide's 
       for(int i=0; i<n; i++){  
           // start form curr deadline and check where it will be assign
           for(int j = arr[i].dead;j>0;j--){
               if(slot[j]==-1){
                   
                   // represent curr slot if not empty
                   slot[j] = i;
                   
                   countJobs++;
                   jobProfit += arr[i].profit;
                   // bcz we assign and that point we go through for next id
                   break;   
               }
           }
       }
       return {countJobs,jobProfit};
      }
};

int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

