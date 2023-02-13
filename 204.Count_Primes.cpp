Sieve Of Eratothons

class Solution {
public:
    int countPrimes(int n) {
        int count = 0 ;
        vector<bool> prime(n+1,true);
          prime [0] = prime [1] = false ; 
        for(int i=2 ; i<n ; i++){
            if(prime[i])
            {
                count++;
                for(int j=2*i ; j<n ; j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        return count++; 
    }
};

public class Solution {
    public int countPrimes(int n) {
        boolean[] notPrime = new boolean[n];
        int cnt = 0;
        for (int i = 2; i < n; i++) {
            if (notPrime[i] == false) {
                count++;
                for (int j = 2; i*j< n; j++) 
                {
                    notPrime[i*j] = true;
                }
            }
        }
        return cnt;
    }
}