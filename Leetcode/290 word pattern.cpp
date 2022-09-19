//nooby approach I guess
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        map<char, string> m1;
        map<string, char> m2;
        int ind=0;
        while(ss>>word){
            if(m1.find(pattern[ind])!=m1.end()){
                if(m1[pattern[ind]]!=word) return false;
            }else if(m2.find(word)!=m2.end()){
                if(m2[word]!=pattern[ind]) return false;
            }
            else{
                m1[pattern[ind]] = word;
                m2[word] = pattern[ind];
            }
            ind++;
        }
        return pattern.size()==ind;
    }
};
