#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root);
    
        int f = 0;
    while(!q.empty()){
        int s = q.size();
        vector<int> v;
        for(int i=0;i<s;i++){
            Node* curr = q.front();
            q.pop();
            v.push_back(curr->data);
            if(i==0){
                f++;
            }
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
            if(f%2 == 0){
                for(int i=0;i<v.size();i++){
                    ans.push_back(v[i]);
                }
            }
            else{
                for(int i=v.size()-1;i>=0;i--){
                    ans.push_back(v[i]);
                }
            }
    }
    return ans;
    
}


int main(){
	
    return 0;
}

