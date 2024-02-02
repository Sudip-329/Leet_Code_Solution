/*class Solution {     TLE
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        int temp = 0;
        for(int i=1; i<pref.size(); i++)
        {
            for(int i=0; i<ans.size(); i++)
            {
                temp = temp ^ ans[i];
            }
            ans.push_back(temp ^ pref[i]);
            temp = 0;
        }
        return ans;
    }
};*/

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);

        for(int i=1;i<pref.size();i++){
            int t=pref[i]^pref[i-1];
            ans.push_back(t);

            //direct ans[i] = pref[i] ^ pref[i-1]; no push back;
        }
        return ans;
    }
};