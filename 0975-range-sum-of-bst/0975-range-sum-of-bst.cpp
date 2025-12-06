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
    int sum = 0;
    bool flag = false;
    int rangeSumBST(TreeNode* root, int low, int high) {
        inOrder(root, low, high);
        return sum;
    }
    void inOrder(TreeNode* root, int low, int high) {
        if (!root)
            return;

        inOrder(root->left, low, high);
        if (root->val >= low)
            flag = true;
        if (root->val > high) {
            flag = false;
            return;
        }
        if (flag)
            sum += root->val;

        inOrder(root->right, low, high);
    }
};