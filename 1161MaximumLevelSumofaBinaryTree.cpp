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
    
    int sumKthLevel(TreeNode* root,int k){
        if(root==NULL){
            return -1;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int level=0,sum=0;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node!=NULL){
                if(level==k){
                    sum+=node->val;
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            else if(!q.empty()){
                q.push(NULL);
                level++;
            }
        }
        return sum;
    }
    
    int maxLevelSum(TreeNode* root) {
        vector<int>v;
        for(int i=0;i<height(root);i++){
            v.push_back(sumKthLevel(root,i));
        }
        
        int temp=INT_MIN,idx=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>temp){
                temp=v[i];
                idx=i;
            }
        }
        
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        //cout<<idx<<endl;
    
        
    return idx+1;
        
    }
    
};
