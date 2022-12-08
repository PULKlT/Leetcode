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
    // int fp=0,fq=0;
    // TreeNode *ans;
    // void preorder(TreeNode *root, TreeNode* p, TreeNode* q)
    // {
    //     if(root==NULL)  return;
    //     preorder(root->left,p,q);
    //     preorder(root->right,p,q);
    //     if(root->val==p->val)   fp=1;
    //     if(root->val==q->val)   fq=1;
    //     if(fp&&fq){
    //         ans = root;
    //         fp=0;
    //         cout<<ans->val<<" ";
    //         return;
    //     }
    // }
    // TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     preorder(root,p,q);
    //     return ans;
    // }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if ((root -> val > p -> val) && (root -> val > q -> val)) {
            return lowestCommonAncestor(root -> left, p, q);
        }
        if ((root -> val < p -> val) && (root -> val < q -> val)) {
            return lowestCommonAncestor(root -> right, p, q);
        }
        return root;
    }
    
};