#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
              swap(nums[j++],nums[i]);
        }
        //return nums;
        for(int i=0; i<nums.size(); i++)
        {
            cout<<nums[i];
        }
    }
};

int main()
{
    Solution ab;

    vector <int> a = {3,1,4,2};
    ab.sortArrayByParity(a);
}