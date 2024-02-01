#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*class Solution {   //O(n) time complexity.
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
        }
        int n=ans.size();
        vector<int>ansf;
        if(n==0)
        {
            ansf.push_back(-1);
            ansf.push_back(-1);
        }else
        {
        ansf.push_back(ans[0]);
        ansf.push_back(ans[n-1]);
        }
        return ansf;
    }
};*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }

private:
    int findFirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int first = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                if (mid == 0 || nums[mid - 1] != target) {
                    first = mid;
                    break;
                }
                else {
                    right = mid - 1;
                }
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return first;
    }

    int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int last = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                if (mid == nums.size() - 1 || nums[mid + 1] != target) {
                    last = mid;
                    break;
                }
                else {
                    left = mid + 1;
                }
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return last;
    }
};




int main()
{
   // vector<int>a = {5,7,7,8,8,10};
    vector<int>a = {5,7,7,8,8,10};
    int target = 6;
    Solution aa;
    vector<int>ans;
    ans = aa.searchRange(a,target);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i];
    }

}