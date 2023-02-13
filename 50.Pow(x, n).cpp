class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};


class Solution {
public:
    double myPow(double x, int n) {
        
        if(n < 0) {  //if power is negative then ans will be fractional.
            x = 1 / x;
        }      
        long num = labs(n);//labs() function can be thought as the long int version of abs().
        double pow = 1;        
        while(num !=0){
            if(num & 1) {// num% 2!=0  and num & 1 , both can 
                         //be used to find the num odd or not;

                pow *= x;//if the number is odd multiply an extra x.
            }
            x *= x;
            num = num/2; // or `num >>= 1` can be used.
        }
        
        return pow;
    }
};