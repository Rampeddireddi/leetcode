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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long>>q;
        q.push({root,0});
        int maxwidth=0;
        while(!q.empty()){
            int len=q.size();
            auto node = q.front();
            long min=node.second;
            int l=0,r=0;
            for(long i=0;i<len;i++){
                auto n=q.front();
                TreeNode* nod=n.first; 
                long v=n.second - min;
                if(nod->left)q.push({nod->left,2*v+1});
                if(nod->right)q.push({nod->right,2*v+2});
                if(i==0)l=v;
                if(i==len-1)r=v;
                q.pop();
            }
            maxwidth=max(maxwidth,(r-l+1));
        }
        return maxwidth;
    }
};