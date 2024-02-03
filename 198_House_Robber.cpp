/*class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int norob = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};
*/


class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> memo(nums.size()+1);
        memo[0] = 0;
        memo[1] = nums[0];
        for(int i = 1; i<nums.size(); i++){
            int val = nums[i];
            memo[i+1] = max(memo[i], memo[i-1] + val);
        }
        return memo[nums.size()];
    }
};