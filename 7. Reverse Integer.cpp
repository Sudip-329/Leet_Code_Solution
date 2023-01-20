class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0)
        {
            int y =x%10;

            if((ans>INT_MAX/10) || (ans<INT_MIN/10))  // inside main
            {
                return 0;
            }
            ans = ans*10 + y;
            x = x/10;
        }
        return ans;
    }
};