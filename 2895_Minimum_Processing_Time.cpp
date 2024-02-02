#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(tasks.begin(),tasks.end());
        sort(processorTime.begin(),processorTime.end());
        int n=tasks.size();
        int m= processorTime.size();
        vector<int>ans;
        int j=m;
        for(int i=3; i<n; i+=4)
        {
            ans.push_back( processorTime[j-1] + tasks[i]);
            j--;
        }
        sort(ans.begin(),ans.end());
        return ans[m-1];
    }
};


int main()
{
    vector<int>a = {10,20};
    vector<int>b ={2,3,1,2,5,8,4,3};
    Solution ab;
    cout<<ab.minProcessingTime(a,b);

}

