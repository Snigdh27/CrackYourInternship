class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>nums;
        for(int i=0;i<nums1.size();i++){
            nums.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            nums.push_back(nums2[i]);
        }
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.size()%2==0){
            
            cout<<nums[n/2-1]<<" "<<nums[n/2]<<"\n";
            cout<<(nums[n/2-1]+nums[n/2])/2;
            return (nums[n/2-1]+nums[n/2])/2;
        }
        else{
            return nums[n/2];
        }
    }
};
