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
    void preorder(TreeNode* root, vector<string>&res,string str){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            str+=to_string(root->val);
            res.push_back(str);
            return;
        }
        if(root!=NULL){str+=to_string(root->val);
            str+="->";
        }
        preorder(root->left,res,str);
        preorder(root->right,res,str);
        str.pop_back();

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;

        preorder(root,res,"");
       
        return res;
    }
};