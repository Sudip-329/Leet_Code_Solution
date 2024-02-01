/*class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>result(size/3,vector<int>(3));
        int arrayIndex = 0;
        for(int i=0; i<size; i+=3)
        {
            if(i+2<size && nums[i+2]-nums[i] <=k){
                result[arrayIndex] = {nums[i],nums[i+1], nums[i+2]};
                arrayIndex++;
            }
            else{
                return vector<vector<int>>();// if no ans return empty vector
            }
        }
        return result;
        
    }
};*/

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
      
        vector<int>vec;
        vector<vector<int>> empty;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        if (nums.size() % 3 != 0)
            return empty;

        vec.push_back(nums[0]);
        for(int i=1;i<=nums.size();i++){
            if(vec.size()<3 && nums[i]-vec[0]>k){
                return empty;
            }
            else if(vec.size()<3 && nums[i]-vec[0]<=k){
                vec.push_back(nums[i]);
            }
            else if(vec.size()==3){
                    ans.push_back(vec);
                    vec.clear();
                    vec.push_back(nums[i]);
                }  
            }
        
       // ans.push_back(vec);
        return ans;
    }
};