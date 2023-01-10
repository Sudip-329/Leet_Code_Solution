class Solution {
public:
    int mySqrt(int x) {
        int a=sqrt(x);
        int b=ceil(a);
        return b;
    }
};