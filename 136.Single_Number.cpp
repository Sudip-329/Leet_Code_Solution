class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans=0;
	   for(auto x:nums)
	   ans^=x; // xor operation where same element will be 0 and the single one will stay
	   return ans;
    }
};