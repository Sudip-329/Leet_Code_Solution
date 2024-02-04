class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int numJobs = profit.size(); // Number of jobs
        vector<tuple<int, int, int>> jobs(numJobs);
      
        for (int i = 0; i < numJobs; ++i) {
            jobs[i] = {endTime[i], startTime[i], profit[i]};
        }
      
        sort(jobs.begin(), jobs.end());
        vector<int> dp(numJobs + 1);
      
        for (int i = 0; i < numJobs; ++i) {
            auto [endTime, startTime, profit] = jobs[i];
          
            int latestNonConflictJobIndex = upper_bound(jobs.begin(), jobs.begin() + i, startTime, [&](int time, const auto& job) -> bool {
                return time < get<0>(job);
            }) - jobs.begin();
          
            dp[i + 1] = max(dp[i], dp[latestNonConflictJobIndex] + profit);
        }
      
        return dp[numJobs];
    }
};


class Solution {
public:

    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
       
        int n = s.size(); 
        vector<pair<int, int>> st(n);
        for(int i = 0; i < n; i++) st[i] = {s[i], i};
        sort(st.begin(), st.end());
        vector<int> dp(n+1, 0); 
        for(int i = n-1; i > -1; i--)
            dp[i] += max(dp[i+1], p[st[i].second] + dp[lower_bound(st.begin() + i, st.end(), make_pair(e[st[i].second], 0)) - st.begin()]);
        return dp[0];
    }
};