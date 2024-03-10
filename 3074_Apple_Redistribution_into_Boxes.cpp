#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

/*class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        long long sum = 0;
        sort(capacity.rbegin(),capacity.rend());
        for(int i=0; i<apple.size(); i++)
        {
            sum+=apple[i];
        }
        int c =0;
        for(int i=capacity.size()-1;i>=0; i--)
        {
            sum=sum-capacity[i];
            c++;
            if(sum<=0)
            {
                break;
            }
        }
        cout<<capacity[0];
        for(int i=0;i<capacity.size(); i++)
        {
            sum=sum-capacity[i];
            c++;
            if(sum<=0)
            {
                break;
            }
        }
        
        return c;
    }
};*/

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0,cnt=0;
        for(auto x:apple)
        {
            sum+=x;
        }
        sort(capacity.rbegin(),capacity.rend());
        for(auto x:capacity)
        {
            cnt+=1;
            sum-=x;
            
            if(sum<=0)
            {
                break;
            }
        }
        return cnt;
    }
};


int main()
{
    Solution ans;
    vector<int>a = {1,3,2};
    vector<int>b = {4,3,1,5,2};
    int k =  ans.minimumBoxes(a,b);
    cout<<k;
}