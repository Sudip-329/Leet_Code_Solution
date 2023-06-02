#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp,ans;
        while(ss>>temp){
            reverse(temp.begin(),temp.end());
            ans+= (temp+" ");
        }   
        return ans.substr(0,ans.size()-1);
    }
};

int main()
{
    string s = "Lets take LeetCode hgkgj";
    Solution a;
    cout<<a.reverseWords(s);
}