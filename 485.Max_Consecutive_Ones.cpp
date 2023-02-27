class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0,temp =0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else{
                count=0;
            }
            if(count>temp)
            {
                temp=count;
            }
        }
        return temp;
        
    }
};


Beats
76.82%