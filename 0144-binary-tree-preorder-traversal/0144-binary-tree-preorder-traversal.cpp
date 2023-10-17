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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root== nullptr)
        return v;
        v.push_back(root->val);
        vector<int> res1 = preorderTraversal(root->left);
        v.insert(v.end(),res1.begin(),res1.end());
        vector<int> res2= preorderTraversal(root->right);
        v.insert(v.end(),res2.begin(),res2.end());
        return v;

       


        
    }
};