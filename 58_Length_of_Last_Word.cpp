class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]==' ')
            {
                continue;
            }
            else{
                count++;
                if(i==0 || s[i-1]== ' ')
                {
                    break;
                }
            }
        }
        return count;
    }
};