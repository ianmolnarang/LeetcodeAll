class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;
        while(curr){
            if(curr->left){
                TreeNode* temp = curr->left;
                while(temp->right and temp->right != curr){
                    temp = temp->right;
                }
                if(!temp->right){
                    temp->right = curr;  
                    curr = curr->left;
                }else{
                    ans.push_back(curr->val);
                    curr = curr->right;
                    temp->right = NULL;
                }
            }else{
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
    }
};