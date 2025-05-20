class Solution {
public:
    TreeNode* res = nullptr;
    
    bool search(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return false;

        bool current = (root == p || root == q);
        
        bool left = search(root->left, p, q);
        bool right = search(root->right, p, q);
     
        if (current + left + right >= 2) {
            res = root;
        }
        
        return current || left || right;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        search(root, p, q);
        return res;
    }
};
