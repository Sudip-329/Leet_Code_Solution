class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int x = 0;
        int count =1;
        for(auto i: mp)
        {
            if(i.second >x)
            {
                x = i.second;
                count=1;
            }
            else if(i.second==x)
            {
                count++;
            }
        }
        return x*count;
    }
};