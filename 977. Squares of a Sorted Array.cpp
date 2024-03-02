/*class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};*/

class Solution{
    public:
    vector<int>sortedSquares(vector<int>&nums){
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0; i<n; i++)
        {
            nums[i]*=nums[i];
        }
        int i=nums.size()-1;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            if(nums[l] > nums[r])
            {
                //ans[i--] = nums[l++];
                ans[i]= nums[l];
                i--; l++;
            }
            else{
                ans[i] = nums[r];
                i--;
                r--;
            }
        }
        return ans;
    }
};