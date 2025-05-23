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
    int cnt=0;
    void result(TreeNode* root){
        if(root==NULL)return;
        if(root)cnt++;
        result(root->left);
        result(root->right);
    }
    int countNodes(TreeNode* root) {
        result(root);
        return cnt;
    }
};