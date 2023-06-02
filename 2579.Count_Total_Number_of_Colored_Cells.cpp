
class Solution {
public:
    long long coloredCells(int n) {
        long long sum=1,m=4;
        if(n==1){
            return sum;
        }
        else
        {
            for (int i = 2; i<=n; i++)
            {
                sum+=m;
                m+=4;
            }
            return sum;
        }
    }
};


class Solution 
{
public:
    long long coloredCells(int n) 
    {
        long long a=1, increment=4;
        for(int i=2; i<=n; i++)
        {
            a += (i-1)*increment;
        }
        return a;
    }
};


java 100
class Solution {
    public long coloredCells(int n) {
        return 1l * n * n + 1l * (n - 1) * (n - 1);
    }
}



class Solution {
    public:
        long long coloredCells(int n) {
            return 1l * n * n + 1l * (n - 1) * (n - 1);
        }
    };