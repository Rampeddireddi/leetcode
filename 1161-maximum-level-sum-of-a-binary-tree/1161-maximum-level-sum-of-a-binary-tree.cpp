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
    void traverse(TreeNode* node, int level, map<int,vector<int>>&mp){
        if(node==NULL)return;
        mp[level].push_back(node->val);
        traverse(node->left,level+1,mp);
        traverse(node->right,level+1,mp);
    }
    int maxLevelSum(TreeNode* root) {
        map<int,vector<int>>mp;
        traverse(root,1,mp);
        int res=1;
        int maxi=INT_MIN;
        for(auto i : mp)
        {
            int sum=0;
            for(int it : i.second){
                sum+= it;
            }
            if(maxi<sum){res=i.first;
            maxi=sum;
            }
        }
        return res;
    }
};