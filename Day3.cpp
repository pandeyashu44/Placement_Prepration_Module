/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* Node, int &maxi){
        if(Node==NULL) return 0;

        int lh=max(0,height(Node->left,maxi));
        int rh=max(0,height(Node->right,maxi));

        maxi=max(maxi, lh+rh+Node->val);

        return (Node->val)+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {

        int maxi = INT_MIN;

        height(root, maxi);

        return maxi;
    }
};