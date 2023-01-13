class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        for(int i=digits.size()-1; i>=0; i--){
            int num=digits[i];
            num++;
            if(carry){carry--;}
            cout<<log10(num)<<endl;
            if((int)log10(num)+1==1){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
                carry++;
            }
        }
        if(carry){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};