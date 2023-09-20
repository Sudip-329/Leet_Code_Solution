#include <iostream>
#include <unordered_map>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();    // they asked for majority element not maximum number of element;
        return nums[n/2];   // here majority means any ans that appear more than floor(n/2) 
    }                       // so floor(n/2) == 3 means should be present 4 times.
};
int main()
{
    vector<int>nums = {2,3,4,1,6,6,6};  //n
    Solution a;
    //unorderd_map<int,int>umap;
    cout<<a.majorityElement(nums);

}