/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
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
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
 
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);

        if (root->left == nullptr && root->right != nullptr){
            return 1 + rightDepth;
        }
        else if (root->left != nullptr && root->right == nullptr) {
            return 1 + leftDepth;
        }
        
        return 1 + min(leftDepth, rightDepth);
    }
};
// @lc code=end

