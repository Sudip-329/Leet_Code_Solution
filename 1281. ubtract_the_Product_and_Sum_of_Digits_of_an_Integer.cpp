class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0,mul=1;
        while(n!=0)
        {
        int y = n%10;
        n = n/10;
        sum +=y;
        mul = mul*y;
        }
        return (mul-sum);
        
    }
};
