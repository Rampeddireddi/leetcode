class Solution {
public:
    map<TreeNode*, TreeNode*> mp;
    
    // Build the parent map
    void Buildmap(TreeNode* root) {
        if (root == NULL) return;
        if (root->left) mp[root->left] = root;
        if (root->right) mp[root->right] = root;
        Buildmap(root->left);
        Buildmap(root->right);
    }
    
    vector<int> Kdistance(TreeNode* start, int k) {
        vector<int> res;
        queue<pair<TreeNode*, int>> q;
        q.push({start, 0});
        set<TreeNode*> visited;
        visited.insert(start);
        
        while (!q.empty()) {
            auto node = q.front();
            q.pop();
            TreeNode* n = node.first;
            int d = node.second;
            
            if (d > k) break;
            if (d == k) res.push_back(n->val);
            
            // Push children and parent if they haven't been visited
            if (n->left && visited.find(n->left) == visited.end()) {
                q.push({n->left, d + 1});
                visited.insert(n->left);
            }
            if (n->right && visited.find(n->right) == visited.end()) {
                q.push({n->right, d + 1});
                visited.insert(n->right);
            }
            if (mp.find(n) != mp.end() && visited.find(mp[n]) == visited.end()) {
                q.push({mp[n], d + 1});
                visited.insert(mp[n]);
            }
        }
        return res;
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        Buildmap(root);
        return Kdistance(target, k);  // Directly pass target as starting node
    }
};
