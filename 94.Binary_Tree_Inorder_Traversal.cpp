class Solution {
    void helper(TreeNode *root,vector<int>& inOrder){
        if(root != NULL){
        helper(root->left,inOrder);
        inOrder.push_back(root->val);
        helper(root->right,inOrder);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder;
        helper(root,inOrder);
        return inOrder;
    }
};