class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        int j=0, k=1;
        vector<int>ans(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0)
            {
                ans[j] = nums[i];
                j+=2;
            }
            else{
                ans[k] = nums[i];
                k+=2;
            }
        }
        return ans;
    }
};


/*class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int>ans;
        int k=0,l=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0){
                ans.push_back(pos[k]);
                k++;
            }
            else{
                ans.push_back(neg[l]);
                l++;
            }
        }
        return ans;
    }
};*/