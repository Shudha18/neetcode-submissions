
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int tar) {
        if(root==nullptr) return nullptr;
        root->left = removeLeafNodes(root->left, tar);
        root->right = removeLeafNodes(root->right, tar);
        if(root->val == tar && 
           root->left == nullptr && 
           root->right==nullptr){
            return nullptr;
        }
        return root;
    }
};