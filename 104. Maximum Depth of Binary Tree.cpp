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
private:
    int mx = 0, cnt = 0;
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            mx = max(mx, cnt);
            return 0;
        }
        cnt++;
        maxDepth(root->left);
        maxDepth(root->right);
        cnt--;

        return mx;
    }
};