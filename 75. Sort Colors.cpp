class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        vector<int> output;
        for(auto i:m){
            while(i.second>0){
                output.push_back(i.first);
                i.second--;
            }
        }
        nums = output;
        // return output;
    }
};



/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        nums.clear();
            for(int i =0; i<mp[0]; i++){
                nums.push_back(0);
            }
            for(int i =0; i<mp[1]; i++){
                nums.push_back(1);
            }
            for (int i =0; i<mp[2]; i++){
                nums.push_back(2);
            }
        
        return;
    }
};
*/

/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};*/