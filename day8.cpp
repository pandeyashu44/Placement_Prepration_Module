// **
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
 
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       vector<vector<int>> ans;
       map<int, map<int, multiset<int> > >mp; 
       queue<pair<TreeNode*, pair<int,int> > > q;

       if(root==NULL) return ans;

       q.push({root, {0,0}});

       while(!q.empty()){
           TreeNode *frontnode = q.front().first;
           
           int hd = q.front().second.first;
           int lvl = q.front().second.second;

           q.pop();

           mp[hd][lvl].insert(frontnode->val);

           if(frontnode->left){
               q.push({frontnode->left, {hd-1, lvl+1}});
           }
           if(frontnode->right){
               q.push({frontnode->right, {hd+1, lvl+1}});
           }
       }
       for(auto it : mp){
          vector<int> v;
          for(auto it1 : it.second){
              v.insert(v.end(), it1.second.begin(), it1.second.end());
          }
          ans.push_back(v);
       }
       return ans;
    }
};