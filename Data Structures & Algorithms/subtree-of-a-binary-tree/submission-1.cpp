class Solution {
    bool helper(TreeNode* root1, TreeNode* root2){
        if(root1==nullptr && root2==nullptr) return true;
        if(root1==nullptr || root2==nullptr) return false;
        if(root1->val != root2->val) return false;
        return helper(root1->left, root2->left) && helper(root1->right, root2->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        if(helper(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};