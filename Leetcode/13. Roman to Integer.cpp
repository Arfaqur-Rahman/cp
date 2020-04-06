class Solution {
    int dig(char c, int sum){
        if(c=='M') return 1000;
        else if(c=='D') return sum>=1000? -500: 500;
        else if(c=='C') return sum>=500? -100:100;
        else if(c=='L') return sum>= 100? -50: 50;
        else if(c=='X') return sum>= 50? -10: 10;
        else if(c=='V') return sum>= 10? -5: 5;
        else if(c=='I') return sum>=5 ? -1 : 1;
        return 0;
    }
public:
    int romanToInt(string s) {
        //reverse(s.begin(), s.end());
        int sum=0;
        for(int i=s.length()-1; i>=0; i--){
            sum+=dig(s[i], sum);
        }
        return sum;
    }
};
