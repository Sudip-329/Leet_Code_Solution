167. Two Sum II - Input Array Is Sorted
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int st = 0;
        int end = num.size() - 1;
        vector<int> ans;
        while(st < end){
            if(num[st] + num[end] == target){
                ans.push_back(st + 1);
                ans.push_back(end + 1);
                return ans;
            }
            else if(num[st] + num[end] < target){
                st++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};