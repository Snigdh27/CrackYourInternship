class Solution {
public:
    
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int left=height(root->left);
        int right=height(root->right);
        
        return max(left,right)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        
        int lHeight=height(root->left);
        int rHeight=height(root->right);
        
        int currDiameter=lHeight+rHeight;
        int lDiameter=diameterOfBinaryTree(root->left);
        int rDiameter=diameterOfBinaryTree(root->right);
        
        return max(currDiameter,max(lDiameter,rDiameter));
    }
};
