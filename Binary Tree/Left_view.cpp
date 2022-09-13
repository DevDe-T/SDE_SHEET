#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   if(root == NULL) return v;
   queue<Node*> q;
   q.push(root);
   
   while(!q.empty()){
       int s = q.size();
       for(int i=0;i<s;i++){
           Node* temp = q.front();
           if(i == 0){
               v.push_back(temp->data);
           }
           q.pop();
           if(temp->left) q.push(temp->left);
           if(temp->right) q.push(temp->right);
       }
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

