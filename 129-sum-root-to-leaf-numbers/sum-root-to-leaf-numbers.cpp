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
    int sumNumbers(TreeNode* root) {
        return sum(root, 0);
    }
    
    int sum(TreeNode* root, int currentSum) {
        if (root == nullptr) return 0;
        // Calculate the current sum along the path
        int newSum = currentSum * 10 + root->val;
        // If it's a leaf node, return the sum of this path
        if (root->left == nullptr && root->right == nullptr) {
            return newSum;
        }
        // Otherwise, continue summing the left and right subtrees
        return sum(root->left, newSum) + sum(root->right, newSum);
    }
};
