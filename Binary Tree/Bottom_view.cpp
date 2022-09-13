#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> v;
        if(root == NULL) return v;
        queue<pair<int, Node*>> q;
        q.push({0, root});
        map<int,int> m;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node = it.second;
            int level = it.first;
            
            m[level] = node->data;
            
            if(node->left) q.push({level-1, node->left});
            if(node->right) q.push({level+1, node->right});
            
        }
        for(auto it : m){
            v.push_back(it.second);
        }
        return v;
    }


int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	
    return 0;
}