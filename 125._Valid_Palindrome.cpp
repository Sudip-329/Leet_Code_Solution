#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

class Solution {
public:
    #define pb push_back
    bool isPalindrome(string s) {
        string str{""};
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) str.pb(tolower(s[i]));
        }
        int l =0;
        int r = str.length() -1;
        while(l < r){
            if(str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};

int main()
{
    Solution t;
    char s[30];
    cin.getline(s,30);
    cout<<t.isPalindrome(s);

}