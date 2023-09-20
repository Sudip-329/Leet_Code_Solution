#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int size1 = nums1.size();
        int size2 = nums2.size();
        //cout<<size1;
        
        int j=0;
        for(int i=0; i<nums1.size(); i++)
        {
            //cout<<nums1[i];                 // Heap buffer overflow
            if(nums2[j]==nums1[i])
            {

                //cout<<"here"<<endl;
                ans.push_back(nums1[i]);
                nums1[i]=-1;
                j++;
                i=0;
            }
            if(i==size1)
            {
                j++;
            }
        }

        return ans;
    }
};

int main()
{
    Solution a;
    vector<int>nums1 = {9,4,9,8,4};
    vector<int>nums2 = {9,4};
    vector<int>ans;
    ans = a.intersect(nums1,nums2);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
}

/*class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size(),s2;
        vector<int> v;
            for(int i=0;i<s1;i++){
                for(int j=0;j<nums2.size();j++){
                    if(nums1[i]==nums2[j]){
                        v.push_back(nums1[i]);
                        nums2.erase(nums2.begin()+j);
                        break;
                    }
                }
            }
        return v;
    }
};*/