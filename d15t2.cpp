class Solution {
public:
    int mySqrt(int n) {
        
        long long int sum = 1;
        int gin =0;
        int i=1;
        while(true){
            if(sum<=n)
            {
                gin++;
            }
            else 
                break;
            i+=2;
            sum = sum + i;
        }
        return gin;
    }
};
