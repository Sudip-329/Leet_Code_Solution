#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        int ans = 0;
        for(int i=0; i<happiness.size(); i++)
        {
            if(happiness[i]-i<1)
            {
                break;
            }
            ans+=(happiness[i]-i);
            k--;
            if(k==0)
            {
                break;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int>a = {12,1,42};
    int k= 3;
    Solution ans;
    int p = ans.maximumHappinessSum(a,k);
    cout<<p;
}