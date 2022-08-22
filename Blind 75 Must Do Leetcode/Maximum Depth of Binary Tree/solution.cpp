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
    int maxDepth(TreeNode* node, int depth = 0) {
        if (node == NULL) return depth;
        int leftMax = maxDepth(node->left, depth + 1);
        int rightMax = maxDepth(node->right, depth + 1);
        return max(leftMax, rightMax);
    }
};
