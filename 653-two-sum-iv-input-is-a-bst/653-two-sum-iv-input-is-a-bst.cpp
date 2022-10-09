class Solution {
private:
    map<int,int>mp;
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        
        if(mp[k - root->val] > 0) return true;
        mp[root->val]++;
        return findTarget(root->left, k) || findTarget(root->right, k);
        
        return false;
    }
};