#include<iostream>
# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if((nums[i]+nums[j])<target)
                {
                    count++;
                    //cout<<"here";
                }

            }
        }
        return count;
        
    }
};

int main()
{
    //vector<int>nums = {-6,2,5,-2,-7,-1,3};
    vector<int>nums = {-1,1,2,3,1};
    int target = 2;
    Solution a;
    a.countPairs(nums, target);

}