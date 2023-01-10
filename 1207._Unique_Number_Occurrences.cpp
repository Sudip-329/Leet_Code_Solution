class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;      // unordered_map<string, int>   to store
        // sudip  21053329 here sudip will be stored in string and roll on int 
//         Store the frequecny.
        for(auto num:arr){
            mp[num]++;
        }
        
//         check the count and insert in unordered set.
        unordered_set<int>set;
        
        for(auto it:mp){
            int freq = it.second;  //here second means 2nd int    above ex: roll is second
            set.insert(freq);
        }
        
//         if size of mp is same as set that means all have unique freq.
        return set.size() == mp.size();
        
    }
};