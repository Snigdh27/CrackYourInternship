class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0){
            return false;
        }
        
        int temp=x;
        long long reverseX=0;
        while(x!=0){
            int val=x%10;
            reverseX=reverseX*10+val;
            x=x/10;
        }
        cout<<reverseX;
        
        if(reverseX==temp){
            return true;

        }
        else{
            return false;
        }
    }
};
