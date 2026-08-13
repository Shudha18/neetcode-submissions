class Solution {
    bool res = false;
    void helper(TreeNode* root, int tar){
        if(!root) return;
        if(root->left==nullptr && root->right==nullptr){
            if(root->val==tar){
                res = true;
                return;
            }
        }
        helper(root->left, tar-root->val);
        helper(root->right, tar-root->val);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        helper(root, targetSum);
        return res;
    }
};