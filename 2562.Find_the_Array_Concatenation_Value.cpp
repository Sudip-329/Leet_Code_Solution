#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*class Solution { //java
    public long findTheArrayConcVal(int[] nums) {
        long ans=0;
        if(nums.length==1)return (long)nums[0];
        for(int i=0;i<nums.length/2;i++)
        {
            String str=nums[i]+""+nums[nums.length-i-1];
            ans+=Long.parseLong(str);
        }
        if(nums.length%2!=0)ans+=nums[nums.length/2];
        return ans;   
    }
}*/


class Solution { //c+=
public:
    
    long long concatenate(int x, int y) {
    long long pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;        
    }
    
    long long findTheArrayConcVal(vector<int>& nums) 
    {
        long long n=nums.size();
        long long b=0, e=n-1,temp=0,ans=0;
        while(b<=e){
            temp = concatenate(nums[b],nums[e]);
            if(b==e){
                ans+=nums[b];
                break;
            }  
            ans+=temp;             
            b++; 
            e--;
        }
        return ans;        
    }
};

long long main()
{
    Solution z;
    vector<long long> ans={5,14,13,8,12};
    cout<<z.findTheArrayConcVal(ans);
}