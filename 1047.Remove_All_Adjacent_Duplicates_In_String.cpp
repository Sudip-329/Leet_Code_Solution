#include<iostream>
using namespace std;

class Solution {
public:
string removeDuplicates(string S) {
        int nRemoved = 0;
        
        do{
            nRemoved = 0;
            for(int i = 0; i < S.size() - 1;)
            {
                if(S[i] == S[i+1]){
                    //remove from i, length 2 menans dupplicate data deleted

                    S.erase(i,2);
                    i--; //again i back to previous one
                    nRemoved++;
                }else{
                    i++;  //if dupplicate not found search for the next one.
                }
            }
        }while(nRemoved > 0 && S.size() > 0);  //at least one dupplicate will be deleted and s should 
        // return something as ans
        
        return S;
    }
};


class Solution {
public:
    string removeDuplicates(string S) {
        string ans = "";
        for(char c : S){
            if(ans.size() > 0 && c == ans.back()){
                ans.pop_back();
            }else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};

/*int main()
{
    string s;
    cin>>s;
    cout<<removeDuplicates(s);
}*/