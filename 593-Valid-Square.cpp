class Solution {
public:
    
    int distance(vector<int>&a,vector<int>b){
        
        return (a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]);
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int>valid({distance(p1,p2),distance(p1,p3),distance(p1,p4),distance(p2,p3),distance(p2,p4),distance(p3,p4)});
        
        if(valid.size()==2 && !valid.count(0)){
            return true;
        }
        else{
            return false;
        }
    }
};
