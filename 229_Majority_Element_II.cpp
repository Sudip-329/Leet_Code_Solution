*class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int n = nums.size();
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            map[nums[i]]++;
        }
        for(auto i : map)
        {
            if(i.second > (n/3))
            {
                ans.push_back(i.first);
            }
        }
        return ans;
        
        Time complexity: O(N)O(N)O(N)
Since we are iterating over the array then it's a linear complexity and we are iterating over the HashMap that also can be linear complexity, then the total complexity is 2 * N which is O(N)
Space complexity: O(N)O(N)O(N)
Since we are storing the count of occurencies for each unique element in the nums array and the array's elements can all be unique then it is linear complexity which is O(N).

    }
    };*/
//Boyer-Moore Majority Voting Solution
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0; // Counters for the potential majority elements
        int candidate1 = 0, candidate2 = 0; // Potential majority element candidates

        // First pass to find potential majority elements.
        for (int i = 0; i < nums.size(); i++) {
            // If count1 is 0 and the current number is not equal to candidate2, update candidate1.
            if (count1 == 0 && nums[i] != candidate2) {
                count1 = 1;
                candidate1 = nums[i];
            } 
            // If count2 is 0 and the current number is not equal to candidate1, update candidate2.
            else if (count2 == 0 && nums[i] != candidate1) {
                count2 = 1;
                candidate2 = nums[i];
            } 
            // Update counts for candidate1 and candidate2.
            else if (candidate1 == nums[i]) {
                count1++;
            } else if (candidate2 == nums[i]) {
                count2++;
            } 
            // If the current number is different from both candidates, decrement their counts.
            else {
                count1--;
                count2--;
            }
        }

        vector<int> result;
        int threshold = nums.size() / 3; // Threshold for majority element

        // Second pass to count occurrences of the potential majority elements.
        count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (candidate1 == nums[i]) {
                count1++;
            } else if (candidate2 == nums[i]) {
                count2++;
            }
        }

        // Check if the counts of potential majority elements are greater than n/3 and add them to the result.
        if (count1 > threshold) {
            result.push_back(candidate1);
        }
        if (count2 > threshold) {
            result.push_back(candidate2);
        }

        return result;
    }
};
 
