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
    int maxval(TreeNode* node, int &val){
        if(node==NULL)return 0;
        int l= max(0,maxval(node->left,val));
        int r=max(0,maxval(node->right,val));
        val=max(val,l+r+node->val);
        return max(l,r)+node->val;
    }
    int maxPathSum(TreeNode* root) {
     int val=INT_MIN;
     maxval(root,val);
     return val;
    }
};