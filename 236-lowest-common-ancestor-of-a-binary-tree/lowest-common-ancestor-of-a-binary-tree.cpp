class Solution {
public:
    TreeNode* res = nullptr;
    
    bool search(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return false;

        // Check if current node is p or q
        bool current = (root == p || root == q);
        
        // Recur for left and right subtrees
        bool left = search(root->left, p, q);
        bool right = search(root->right, p, q);
        
        // If two out of three flags (current, left, right) are true,
        // this is the lowest common ancestor
        if (current + left + right >= 2) {
            res = root;
        }
        
        // Return true if any one of the three is true
        return current || left || right;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        search(root, p, q);
        return res;
    }
};
