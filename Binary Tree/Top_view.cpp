#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> v;
        if(root == NULL) return v;
        queue<pair<Node*, int>> q;
        map<int,int> m;
        q.push({root, 0});
        
        while(!q.empty()){
            Node* curr = q.front().first;
            int level = q.front().second;
            
            q.pop();
            if(m.find(level) == m.end()){
                m[level] = curr->data;
            }
            
            if(curr->left) q.push({curr->left, level-1});
            if(curr->right) q.push({curr->right, level+1});
    
        }
        for(auto it : m){
            v.push_back(it.second);
        }
        return v;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

