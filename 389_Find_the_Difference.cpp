#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    /*char findTheDifference(string s, string t) {
        int n = s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<n; i++) if(s[i]!=t[i]) return t[i];
        return t[n];
    }*/

    /*char findTheDifference(string s, string t) {
        s+=t;
        int c=0;
        for(auto i : s)
        {
            c^=i;
        }
        return c;
    }*/

        char findTheDifference(string s, string t) {
        int sum = 0;
        for (auto &c: t) sum+=c;
        for (auto &c: s) sum-=c;
        return (char)sum;
    }
};





int main()
{
    Solution a;
    string s = "abcd", t = "abcde";
    cout<<a.findTheDifference(s,t);
}