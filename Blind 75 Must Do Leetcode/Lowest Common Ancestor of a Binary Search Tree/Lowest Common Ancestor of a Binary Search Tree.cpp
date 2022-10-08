/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    bool dfs(TreeNode* node, TreeNode* p, TreeNode* q) {
        if (node == NULL) return false;
        bool left = dfs(node->left, p, q);
        bool right = dfs(node->right, p, q);
        // Since values are unique
        bool cur = (node == p || node == q);
        if (left + right + cur >= 2) {
            ans = node; 
            return true;
        }
        return (left or right or cur);
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* node, TreeNode* p, TreeNode* q) {
        dfs(node, p, q);
        return ans;
    }
};