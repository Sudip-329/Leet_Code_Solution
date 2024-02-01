/*class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0; i<=16; i++)
        {
            long long a = pow(4,i);
            if(a == n)
            {
                return true;
            }

            if(a>n)  // not necessary but it will optimize the code;
            {
                return false;
            }
        }
        return false;
    }
};*/



class Solution {
public:
    bool isPowerOfFour(int n) {
        // If 'n' is 1, it is a power of four
        if (n == 1)
            return true;
        
        // If 'n' is non-positive, it cannot be a power of four
        if (n <= 0)
            return false; 
        
        // Calculate the logarithm of 'n' with base 4
       // double logarithmBase4 = log(n) / log(4);
        
        // Check if the result of the logarithmic operation is an integer
        //return (logarithmBase4 == (int)logarithmBase4);

        double sqrtN = sqrt(n);
        double log2SqrtN = log2(sqrtN);
        return (log2SqrtN == (int)log2SqrtN);

    }
};