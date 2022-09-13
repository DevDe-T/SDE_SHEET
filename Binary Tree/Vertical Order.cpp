#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,vector<int>> mp;    // create Map of int and vector<int>
        vector<vector<int>> ans;    // to store and return ans
        
        queue<pair<TreeNode*,int>> q;   // queue of pair of TreeNode and int
        q.push({root, 0});  // push root and 0 for column
        
        while(!q.empty()){
            multiset<pair<int,int>> temp;   // to store values in correct sequence
            int n = q.size();
            
            while(n--){
                TreeNode *curr = q.front().first;
                int h = q.front().second;
                temp.insert({h, curr->val});    // firstly store in temp
                q.pop();
                
                if(curr->left)
                    q.push({curr->left, h-1});  // push if left then col - 1

                if(curr->right)
                    q.push({curr->right, h+1});  // push if right then col +1
            }
            for(auto it: temp)
                mp[it.first].push_back(it.second);  // secondly store in map
        }
        for(auto it: mp)
            ans.push_back(it.second);   // lastly store in ans vector
        
        return ans;
    }

int main(){
	vector<int> v = {1,2,3,4,7,5,4};
	int n = 7;
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

