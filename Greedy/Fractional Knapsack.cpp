#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(struct Item i1, struct Item i2){
    double d1 = (double)i1.value / (double)i1.weight;
    double d2 = (double)i2.value / (double)i2.weight;
    
    return d1>d2;
}
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, cmp);
        double profit  = 0;
        
        for(int i=0;i<n;i++){
            if(W < arr[i].weight){
                profit += ((double)arr[i].value/(double)arr[i].weight)*((double)W);
                break;
            }
            else{
                profit+=(double)arr[i].value;
                W = W-arr[i].weight;
            }
        }
        
        return profit;
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

