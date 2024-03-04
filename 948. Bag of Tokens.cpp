/*class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0, j=tokens.size()-1;
        int score = 0,maxscore = 0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-= tokens[i];
                i++;
                score++;
                maxscore = max(maxscore,score);
            }
            else if(score>=1)
            {
                power+=tokens[j];
                j--;
                score--;
            }
            else{
                break;
            }
        }
        return maxscore;
    }
};*/

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans=0;
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int maxi=0;
        while(i<=j){
            if(power>=tokens[i]){
                ans++;
                power-=tokens[i];
                maxi=max(maxi,ans);
                i++;
            }
            else if(ans>0){
                ans--;
                power+=tokens[j];
                j--;
            }
            else {
                break;
            }
        }
        return maxi;
    }
};