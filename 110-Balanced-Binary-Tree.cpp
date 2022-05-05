class Solution {
public:
    
    int height(TreeNode* root){
        if(root==NULL){
            return NULL;
        }
        
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        
        return max(leftHeight,rightHeight)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        if(isBalanced(root->left)==false){
            return false;
        }
        if(isBalanced(root->right)==false){
            return false;
        }
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        if(abs(lh-rh)<=1){
            return true;
        }
        else{
            return false;
        }
        
    }
};
