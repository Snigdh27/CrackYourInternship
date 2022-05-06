class Solution {
public:
    void inorder(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>v;
        inorder(root,v);
        
        int lowIdx=0,highIdx=0;
        
        for(int i=0;i<v.size();i++){
            if(v[i]==low){
                lowIdx=i;
            }
            if(v[i]==high){
                highIdx=i;
            }
        }
        
        cout<<lowIdx<<" "<<highIdx<<endl;
        
        int sum=0;
        
        for(int i=lowIdx;i<=highIdx;i++){
            sum+=v[i];
        }
        
        return sum;
        
    }
};
