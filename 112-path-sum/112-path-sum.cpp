class Solution {
public:
    void preOrder(TreeNode *root, int sum, int x, bool &ans)
    {
        if(root == NULL) return;
        sum += root->val;
        if(root->left == NULL and root->right == NULL and sum == x)
        {
            ans = true;
            return;
        }
        preOrder(root->left, sum, x, ans);
        preOrder(root->right, sum, x, ans);
    }
    
    bool hasPathSum(TreeNode* root, int x) {
        if(root == NULL) return false;
        int sum = 0;
        bool ans = false;
        preOrder(root,sum,x, ans);
        return ans;
    }
};