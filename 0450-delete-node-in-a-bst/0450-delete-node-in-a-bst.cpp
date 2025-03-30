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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr; // Base case: If the tree is empty, return null

        if (key < root->val) {
            root->left = deleteNode(root->left, key);  // Search in left subtree
        } 
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);  // Search in right subtree
        } 
        else { 
            if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } 
            else if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Case 2: Node has two children
            TreeNode* successor = findMin(root->right); // Find inorder successor
            root->val = successor->val; // Replace with successor value
            root->right = deleteNode(root->right, successor->val); // Delete successor
        }

        return root;
    }

private:
    // Helper function to find the minimum value node in a subtree
    TreeNode* findMin(TreeNode* node) {
        while (node->left) {
            node = node->left;
        }
        return node;
    }
};
