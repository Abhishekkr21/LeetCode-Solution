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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root == nullptr)
        return v;
        vector<int> res1= postorderTraversal(root->left);
        v.insert(v.end(),res1.begin(),res1.end());
        vector<int> res2= postorderTraversal(root->right);
        v.insert(v.end(),res2.begin(),res2.end());
        v.push_back(root->val);
        return v;


        
    }
};