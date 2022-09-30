class Solution {
public:
vector<vector<int>> levelOrder(TreeNode* root) {

    vector<vector<int>> v;
    
    if(root == NULL)return v;
    
    queue<TreeNode *> q;
    q.push(root);
     
    
     
    int count = 0;
    
    while(!q.empty()){
        int size = q.size();
        vector<int> t;
        
        
        for(int i=0; i<size; i++){
            TreeNode *temp = q.front();
            t.push_back(temp->val);
            q.pop();
            
            if(temp->left != NULL)
                q.push(temp->left);
                
            if(temp->right != NULL)
                q.push(temp->right);
        }
        v.push_back(t);
        
    }
    return v;
}
};