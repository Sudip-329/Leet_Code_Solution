class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        map<char,int> m;
        for(auto it:s)m[it]++;
        priority_queue<pair<int,char>>p;
        for(auto it:m){
            p.push({it.second,it.first});
        }
        while(!p.empty()){
            int n=p.top().first;
            while(n--){
                ans+=p.top().second;
            }
            p.pop();
        }
        return ans;
    }
};

/*class Solution {
private:
    static bool compare(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    }
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        for(int i=0; i<s.size(); i++)
        {
            map[s[i]]++;
        }
        vector<pair<char, int>> mapVector(map.begin(),map.end());
        sort(mapVector.begin(), mapVector.end(), compare);
        vector<char>dip;  // directly store on a string no need to use another vector
        for(const auto& pair : mapVector)
        {
            int j= pair.second;
            for(int i=0; i<j; i++)
            {
                dip.push_back( pair.first);
            }
        }
        string str(dip.begin(), dip.end());
        return str;
    }
};


class Solution {
public:
    static bool comp(pair<char,int> a, pair <char,int> b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        map <char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        vector <pair <char,int>> v;
        for(auto it:m)
        {
            v.push_back(it);
        }
        string h="";
        sort(v.begin(),v.end(),comp);
        for(auto it: v)
        {
            while(it.second--)
            {
                h+=it.first;
            }
        }
        return h;
    }
};*/