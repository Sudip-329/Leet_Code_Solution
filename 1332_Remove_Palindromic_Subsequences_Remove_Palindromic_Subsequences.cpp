class Solution {
public:
    int removePalindromeSub(string s) {
        return 2 - equal(s.begin(), s.end(), s.rbegin()) - s.empty();
    }
};


//2 pointer solution.
class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0, j=s.size()-1;
        while(i<j) {
			//If string is not palindrome return 2
            if(s[i]!=s[j]) 
            {
                return 2;  
            }
            i++;
            j--;
        }
        return 1;
    }
};