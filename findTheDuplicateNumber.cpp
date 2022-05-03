class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        
        for(auto i:nums){
            mp[i]++;
        }
        
        int temp=0;
        
        for(auto i:mp){
            if(i.second>1){
                temp=i.first;
            }
     
        }
        
        return temp;
    }
};
