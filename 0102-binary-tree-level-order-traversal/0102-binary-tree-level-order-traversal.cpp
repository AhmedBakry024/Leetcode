/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
    void dfs(TreeNode* root, int h) {
        if (!root)
            return;
        if (h == ans.size()) {
            vector<int> temp;
            temp.push_back(root->val);
            ans.push_back(temp);
        } else {
            ans[h].push_back(root->val);
        }
        dfs(root->left, h + 1);
        dfs(root->right, h + 1);
    }
};