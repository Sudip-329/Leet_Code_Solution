/*class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i : words)
        {
            string temp = i;
            reverse(temp.begin(),temp.end());
            if(temp == i)
            {
                return temp;
            }
        }
        return "";
    }
};*/

static const int _ = []() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();

#pragma GCC optimize("Ofast")
class Solution{
    public:
        bool is_palindrome(string a)
        {
            int i=0, j=a.size()-1;
            while(i<j)
            {
                if(a[i]==a[j])
                {
                    i++,j--;
                }
                else{
                    return false;
                }
            }
            return true;
        }
        string firstPalindrome(vector<string>&words){
            for(int i=0; i<words.size(); i++)
            {
                if(is_palindrome(words[i]))
                {
                    return words[i];
                }
            }
            return "";
        }
};