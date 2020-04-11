class Solution {
    string stringProcess(string s){
        string t;
        for(char c: s){
            if(c=='#'){
                if(!t.empty())
                    t.pop_back();
            }
            else {
                t+=c;
            }
        }
        return t;
    }
public:
    bool backspaceCompare(string S, string T) {
        return stringProcess(S)==stringProcess(T);
    }
};
