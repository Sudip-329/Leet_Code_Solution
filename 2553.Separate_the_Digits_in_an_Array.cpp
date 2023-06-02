#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answer;
        vector<int>temp;
        for(int i=0;i<nums.size(); i++)
        {
            //cout<<"1";
            //cout<<nums[i];
            while(nums[i]>0)
            {
                //cout<<"Here";
                temp.push_back((nums[i]%10));
                nums[i]= nums[i]/10;
            }
            //cout<<temp.size()<<"size";
            reverse(temp.begin(),temp.end());

            for(int i=0;i<temp.size(); i++)
            {
                //cout<<temp[i];
                answer.push_back(temp[i]);
            }
            temp.clear();
        }
        for(int i=0;i<answer.size(); i++)
        {
            cout<<answer[i]<<"  ";
        }
        
    }
};

int main()
{
    Solution a;
    vector<int>b={13,25,83,77};
    a.separateDigits(b);
}