#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy=INT_MAX;
        int sell_val=0;
        int ans = 0;

        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]<min_buy)
            {
                min_buy = prices[i];
                //cout<<min_buy;
            }
            sell_val = prices[i]- min_buy;
            if(sell_val>ans)
            {
                ans = sell_val;
            }
        }
        return ans;
    }

};


int main()
{
    Solution a;
    vector<int> in= {7,6,4,3,1};
    cout<<a.maxProfit(in)<<endl;
}