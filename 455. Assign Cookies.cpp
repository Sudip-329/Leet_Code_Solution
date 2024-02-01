class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0;
        int gsize = g.size()-1;
        int ssize = s.size()-1;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(gsize>=0 && ssize>=0)
        {
            if(s[ssize]>=g[gsize])
            {
                ans++;
                --ssize;
                --gsize;
            }
            else{
                gsize--;
            }
        }
        return ans;
    }
};
