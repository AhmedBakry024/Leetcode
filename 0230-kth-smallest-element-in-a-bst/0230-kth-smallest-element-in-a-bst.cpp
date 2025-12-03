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
    vector<int> ans;
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root, k);
        return ans[k - 1];
    }
    void inOrder(TreeNode* root, int k) {

        if (!root)
            return;

        inOrder(root->left, k);

        ans.push_back(root->val);
        if (ans.size() == k)
            return;

        inOrder(root->right, k);
    }
};