
class Solution {
    TreeNode* helper(TreeNode* root, TreeNode* node){
        if(root==nullptr) return node;
        if(root->val < node->val){
            root->right = helper(root->right, node);
        }else{
            root->left = helper(root->left, node);
        }
        return root;
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        return helper(root, newNode);
    }
};