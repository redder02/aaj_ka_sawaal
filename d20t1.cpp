class Solution {
public:
    int N = 1e7 + 10;
    int countPrimes(int n) {
        vector<bool> isPrime(N,1);

        isPrime[0] = false;
        isPrime[1] = false;
        int count = 0;
        for(int i=2;i<n;++i)
        {
            if(isPrime[i] == 1)
            {
                for(int j=2*i;j<n;j+=i)
                {
                    isPrime[j] = false;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(isPrime[i] == 1)
                count++;
        }
        return count;

    }
};
