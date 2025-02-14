class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        dfs(root, result);
        return result;
    }
    
    void dfs(TreeNode* node, vector<int>& result) {
        if (!node) return;
        dfs(node->left, result);      // Traverse left subtree
        dfs(node->right, result);     // Traverse right subtree
        result.push_back(node->val);  // Visit root
    }
};