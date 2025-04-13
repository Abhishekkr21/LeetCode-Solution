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
void inorder(TreeNode* root , vector<int>& v)
{
    if(!root)
    return;
    inorder(root->right,v);
    v.push_back(root->val);
    inorder(root->left,v);
}
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        priority_queue<int> maxH;
        for(int i=0;i<v.size();i++)
        {
            maxH.push(v[i]);
            if(maxH.size()>k)
            {
                maxH.pop();
            }
        }
       return maxH.top();
    }
};