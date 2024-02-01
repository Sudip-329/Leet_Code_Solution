*class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int a = s.length();
        int b = t.length();
        int n = max(a,b);
        for(int i=0; i<n; i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};*/


/*class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int a = s.length();
        int b = t.length();
        if(b>a)  //previous one better.
        {
            return false;
        }
        for(int i=0; i<a; i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};*/

/*
class Solution
{
    public:
    vector<int> freq(string& s){
        vector<int>ans(26,0);
        for(char c:s){
            ans[c-'a']++;
        }
        return ans;
    }

    bool isAnagram(string s, string t){
        return freq(s) == freq(t);
    }
};*/

class Solution {

private:
    int arr[26] = {0};
public:
    bool isAnagram(string s, string t) {
      if (s.size() != t.size()) {
          return false;
      }

      for (int i = 0; i < s.size(); i++) {
          int idx = s[i] - 'a';
          arr[idx]++;
      }

      for (int j = 0; j < t.size(); j++) {
          int idx = t[j] - 'a';
          arr[idx]--;
      }

      for (int k = 0; k < 26; k++) {
          if (arr[k] != 0)
            return false;
      }

      return true;
    }
};