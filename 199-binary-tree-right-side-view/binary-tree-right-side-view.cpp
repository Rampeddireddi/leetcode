class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;  // Check for an empty tree

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();  // Get the number of nodes at the current level
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                // If it's the rightmost element at the current level, add it to the result
                if (i == size - 1) {
                    res.push_back(node->val);
                }

                // Add left and right children to the queue
                if (node->left != NULL) q.push(node->left);
                if (node->right != NULL) q.push(node->right);
            }
        }

        return res;
    }
};
