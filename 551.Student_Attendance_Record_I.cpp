class Solution {
public:
    bool checkRecord(string s) {
        int acount=0;
        for(int i=0; i<s.length(); i++)
        {
            //This condition counts total number of A's
            if(s[i]=='A')
            {
                acount++;
            }
            //According to question  Absent(A) strictly 
            //fewer than 2 days total.
            if(acount>1)
            {
                return false;
            }
            //Next condition means 3 consecutive Late.
            if(s[i]=='L' && s[i]==s[i+1] && s[i+1]==s[i+2])
            {
                return false;
            }
        }
        return true;
    }
};



//java
class Solution {
    public boolean checkRecord(String s) {
        int lc = 0,a=0;
        for(char c : s.toCharArray())
        {
            //If P or A comes in between three L, then they
            //will no more considered as consecutive.So 
            //lc will be 0.
            if(c=='P' || c == 'A')
                lc=0;

            if(c == 'L')
                lc++;
        
            if(lc == 3)
                return false;
                
            if(c == 'A')
                a++;
            
            if(a>=2)
                return false;
        }
        return true;
    }
}