class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans =0;
        for(int i=0; i<=30; i++)
        {
            ans = pow(2,i);
            if(ans== n)
            {
                return true;
            }    
        }
        return false;
    }
};