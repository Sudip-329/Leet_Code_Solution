/*class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1; i<10; i++)
        {
            int num = i; 
            int nextdigit = i+1;
            while(num<high & nextdigit<10)
            {
                num = num*10 + nextdigit;
                if(num>=low && num<=high)
                {
                    ans.push_back(num);
                }
                nextdigit++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
*/
class Solution {  // no need to count the next digit
public:
    vector<int> sequentialDigits(int low, int high) {
        std::vector<int> result;

        for (int i = 1; i <= 9; i++) {
            int num = i;

            for (int j = i + 1; j <= 9; j++) {
                num = num * 10 + j;

                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }

        std::sort(result.begin(), result.end());
        return result;
    }
};