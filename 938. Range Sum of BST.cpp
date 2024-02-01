/*

 
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root) 
        {
            return 0;
        }

        int currentVal = (root->val >= low && root->val <= high) ? root->val : 0;
        int leftSum = rangeSumBST(root->left, low, high);
        int rightSum = rangeSumBST(root->right, low, high);

        return currentVal + leftSum + rightSum;
    }
};*/

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
 
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) {
            return 0;
        }

        if (low <= root->val && root->val <= high) {
            return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        } else if (root->val < low) {
            return rangeSumBST(root->right, low, high);
        } else {
            return rangeSumBST(root->left, low, high);
        }
    }
};*/

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
 const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        while(root){
            if(root->left){
                TreeNode* temp=root->left;
                TreeNode* curr=root->left;
                while(temp->right){
                    temp=temp->right;
                }
                temp->right=root;
                root->left=NULL;
                root=curr;
            }
            else{
                if(root->val>=low&&root->val<=high){
                    sum+=root->val;
                }
                root=root->right;
            }
        }
        return sum;
    }
};