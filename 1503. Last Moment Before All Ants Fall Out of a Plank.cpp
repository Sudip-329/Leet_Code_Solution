class Solution {    // question by google.
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lastmoment = 0;
        for(auto l : left)
            lastmoment = max(lastmoment, l);
        for(auto r : right)
            lastmoment = max(lastmoment, n - r);
        return lastmoment;
        
    }
};


class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lm=0,rm=INT_MAX;
        for(int i=0;i<left.size();i++) lm=max(lm,left[i]);
        for(int i=0;i<right.size();i++) rm=min(rm,right[i]);
        int res=max(lm,(n-rm));
        return res;
    }
};