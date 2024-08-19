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
    int d=-1;
    int diameter(TreeNode* node){
        if(node==NULL)return 0;
        int l=diameter(node->left);
        int r=diameter(node->right);
        if((l+r)>d)d=l+r;
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       diameter(root); 
       return d;
    }
};