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
    TreeNode* insert(TreeNode* root, TreeNode* node){
        if(root == nullptr) return node;
        if(root->val > node->val){
            root->left = insert(root->left, node);
        }else{
            root->right = insert(root->right, node);
        }
        return root;
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = new TreeNode(val);
        return insert(root, node);
    }
};