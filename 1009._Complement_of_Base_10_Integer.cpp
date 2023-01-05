#include<iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0) return 1;
        unsigned m = ~0;
        while( m & num ) m = m << 1;
        return ~num ^ m;
    }
};

/*int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.bitwiseComplement(n);
}*/