

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int freq[26] = {0};
        for(char task : tasks){
            freq[task - 'A']++;
        }
        sort(begin(freq) , end(freq));
        int chunk = freq[25] - 1;
        int idel = chunk * n;

        for(int i=24; i>=0; i--){    
            if(freq[i]==0)
            {
                break;
            }
            idel -= min(chunk,freq[i]);  
        }

        return idel < 0 ? tasks.size() : tasks.size() + idel;
    }
};