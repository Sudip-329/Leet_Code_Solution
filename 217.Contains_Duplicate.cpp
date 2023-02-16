class Solution { 
public:
    bool containsDuplicate(vector<int>& nums) {
        long long n = nums.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                }
            }
        }
        return false;  
    }
};



/*untime
136 ms
Beats
52.5%

// Shorted Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};*/


R/*untime
201 ms
Beats
19.9%

Time complexity: O(n)
Space complexity: O(n)

// Set Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > 
        set<int>(nums.begin(),nums.end()).size();
    }
};*/


Runtime
236 ms
Beats
10.77%

// Contains Duplicate hashmap
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto i : nums) mp[i]++;
        for(auto i : mp)
        {
            if(i.second >= 2) return true;
        }
        return false;
    }
};



class Solution {//java  
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums); 
        for (int i = 0; i < nums.length - 1; i++) {
                if (nums[i] == nums[i+1]) {
                    return true;
                }
        }
        return false;
    }
}

Time complexity: O(nlog(n))
Space complexity: O(1)

