/*class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        count[0] = 1;
        int curr_sum = 0;
        int total_subarrays = 0;

        for (int num : nums) {
            curr_sum += num;
            if (count.find(curr_sum - goal) != count.end()) {
                total_subarrays += count[curr_sum - goal];
            }
            count[curr_sum]++;
        }

        return total_subarrays;
    }
};
*/

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int result = 0;
        int prefixSum = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i=0; i<n; i++){
            prefixSum += nums[i];
            result += mp[prefixSum - goal];
            mp[prefixSum]++;
        }
        return result;
        
    }
};