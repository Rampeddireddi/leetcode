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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        // vector<int>level;
        vector<int>res;
        while(!(q.empty())){
            
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
            TreeNode* node=q.front();
            // q.pop();
            if(node->left!=NULL)q.push(node->left);
            if(node->right!=NULL)q.push(node->right);
            level.push_back(node->val);
            q.pop();    
            }
            sort(level.rbegin(),level.rend());
            res.push_back(level[0]);
        }
        return res;
    }
};