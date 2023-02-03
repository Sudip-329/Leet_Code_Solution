class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0 ; int a = nums.size();
        for(int j=0;j<a;j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};