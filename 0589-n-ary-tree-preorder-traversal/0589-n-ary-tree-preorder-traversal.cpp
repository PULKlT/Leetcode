/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    void tra(Node* temp)
    {
        ans.push_back(temp->val);
        for(auto it: temp->children)
            tra(it);
    }
    vector<int> preorder(Node* root) {
        if(root == NULL)    return ans;
        tra(root);
        return ans;
        
    }
};