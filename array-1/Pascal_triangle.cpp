#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> c;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    c.push_back(1);
                }
                else{
                    c.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(c);
        }
        
        return v;
}

int main(){
	vector<vector<int>> pascal_triangle;
    int n = 5;
	pascal_triangle = generate(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<pascal_triangle[i][j]<<" ";
		}
		cout<<endl;
	}
}