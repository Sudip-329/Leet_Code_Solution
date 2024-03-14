/*class Solution {
public:
    int pivotInteger(int n) {
        int i=1, j=n;
        int total= (n*(n+1))/2;
        while(i<=j)
        {
            int mid = i+(j-i) /2;
            int premidsum = (mid *(mid+1)) /2;
            int postmidsum = total-premidsum + mid;
            if(premidsum==postmidsum)
            {
                return mid;
            }
            else if(premidsum<postmidsum)
            {
                i=mid+1;
            }
            else{
                j = mid-1;
            }
        }
        return -1;
    }
};*/


#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int pivotInteger(int n) {
        double x=sqrt(n*(n+1)/2);
        return x==(int)x?x:-1;
    }
};