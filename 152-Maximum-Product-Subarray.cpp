class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int maxNum=ans;
        int minNum=ans;
        
        int n=nums.size();
        
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxNum,minNum);
            }
            maxNum=max(nums[i],nums[i]*maxNum);
            minNum=min(nums[i],nums[i]*minNum);
            ans=max(ans,maxNum);
        }
        
        return ans;
    }
};
