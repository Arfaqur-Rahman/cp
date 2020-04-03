class Solution {
    int sum(int n){
        int s=0;
        while(n){
            int t=n%10;
            s+= t*t;
            n/=10;
        }
        return s;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(1){
            if(n==1) return true;
            n=sum(n);
            if(st.count(n)==1) return false;
            st.insert(n);
        }
        
    }
};
