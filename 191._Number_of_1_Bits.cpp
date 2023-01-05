class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0)
        {
            if(n&1)  //normal and operation like if last bit 1 than
            {        // 1 and 1 = 1 ....here ans is 1 , if got 1 then count++
                count ++;
            }
            n = n>>1;
        }
        return count;
        
    }
};