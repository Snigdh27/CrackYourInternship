class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                v.push_back(i);
            }
        }
        
        /*for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }*/
        
        if(k<=v.size()){
            return v[k-1];
        }
        else{
            return -1;
        }
    }
};