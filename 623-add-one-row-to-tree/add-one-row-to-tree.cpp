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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
          if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        fun(root, val, depth);
        return root;
    }
    
    void fun(TreeNode* &root, int v, int depth) {
        if (root == NULL) return;
      if (depth == 2) {
    TreeNode* leftTemp = new TreeNode(v);
    TreeNode* rightTemp = new TreeNode(v);
    leftTemp->left = root->left;
    rightTemp->right = root->right;
    root->left = leftTemp;
    root->right = rightTemp;
}

        fun(root->left, v, depth - 1 );
        fun(root->right, v, depth- 1);
    }
};

