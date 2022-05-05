class Solution {
public:
    int reverse(int x) {
        long long num=0;
        while(x!=0){
            int val=x%10;
            num=num*10+val;
            x=x/10;
        }
        
        if(num>INT_MAX || num<INT_MIN){
            return 0;
        }
        else{
            return num;
        }
    }
};
