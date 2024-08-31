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
    int getMinimumDifference(TreeNode* root) {
         if (!root)
        return INT_MAX;

    int minDiff = INT_MAX;

    if (root->left) {
        TreeNode* leftMax = root->left;
        while (leftMax->right)
            leftMax = leftMax->right;
        
        minDiff = min(minDiff, root->val - leftMax->val);
    }

    if (root->right) {
        TreeNode* rightMin = root->right;
        while (rightMin->left)
            rightMin = rightMin->left;

        minDiff = min(minDiff, rightMin->val - root->val);
    }

    int leftMinDiff = getMinimumDifference(root->left);
    int rightMinDiff = getMinimumDifference(root->right);

    minDiff = min(minDiff, min(leftMinDiff, rightMinDiff));

    return minDiff;
        

        
    }
};