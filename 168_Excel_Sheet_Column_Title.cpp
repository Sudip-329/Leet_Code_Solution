#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
        if (n < 27) {
            return string(1, 'A' + (n - 1) % 26);  // 1 says there will be only one character in output;
        }         //if n = 26 ans should be Z, here n-1 = 25 and 25%26 = 25 so, 25+'A'(65) = 90 that is Z
        
        string c = "";
        while (n > 0) {
            if (n % 26 == 0) {
                c += 'A' + 25;
                n -= 1;
            } else {
                c += 'A' + n % 26 - 1;    //if n = 28 then c+= 'A' + 1 = B
            }
            n /= 26;   //now n = 1;    c+= 'A'+0 = A
        }
        reverse(c.begin(), c.end());   // c = BA now reverse AB
        return c;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution a;
    string ans = a.convertToTitle(n);
    cout<<ans;

}
