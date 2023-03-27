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
public:
    void in(TreeNode* root , int &c){
          if(root==NULL) return ; 
        
        in(root->left , c) ;
        c++ ;
        in(root->right ,c) ;
         
    }
    int countNodes(TreeNode* root) {
       int count = 0  ;
        in(root , count) ;
        return count ; 
    }
   
};