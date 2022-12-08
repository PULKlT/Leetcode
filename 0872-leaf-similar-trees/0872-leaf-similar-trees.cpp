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
    vector<int> v1;
    void preorder(TreeNode *root)
    {
        if(root==NULL)  return;
        if(!root->left&&!root->right)
            v1.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        preorder(root1);
        preorder(root2);
        int n = v1.size();
        if(n%2!=0)  return false;
        for(int i=0;i<n/2;i++)
        {
            if(v1[i]!=v1[i+n/2])
                return false;
        }
        return true;
    }
};