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
  bool balancefactor=true;
    int balance(TreeNode* node){
        if(node==NULL)return 0;
        int l=balance(node->left);
        int r=balance(node->right);
        if(abs(l-r)>1) balancefactor=false;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
      balance(root);
      return balancefactor;
    }
};