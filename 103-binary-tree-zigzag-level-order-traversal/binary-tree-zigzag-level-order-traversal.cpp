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

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue<TreeNode*>Q;
     bool zige=false;
    vector<vector<int>>res;
    if(root==NULL)return res;
    Q.push(root);
    while(!Q.empty()){
        int s=Q.size();
         vector<int>v;
        for(int i=0;i<s;i++){
           TreeNode* node = Q.front();
           Q.pop();
           v.push_back(node->val);
           if(node->left !=NULL)Q.push(node->left);
           if(node->right!=NULL)Q.push(node->right);

        }
        if(zige){
            reverse(v.begin(),v.end());
        }
        zige=!(zige);
        res.push_back(v);
    }
    return res;
    }
};