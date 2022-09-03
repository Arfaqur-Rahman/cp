class Solution { 
public:
    // shorter code is discussed in discuss section
    // https://leetcode.com/submissions/detail/790515158/
    string addBinary(string a, string b) {
        string ans;
        int carry=0;
        int aind=a.size()-1, bind=b.size()-1;
        while(aind>=0 and bind>=0){ 
            if(a[aind]=='0' and b[bind]=='0' and carry==0) ans+='0';
            else if(a[aind]=='0' and b[bind]=='0' and carry==1) {ans+='1'; carry=0;}
            else if((a[aind]=='0' and b[bind]=='1' and carry==0) or (a[aind]=='1' and b[bind]=='0' and carry==0) ) ans+='1';
            else if((a[aind]=='0' and b[bind]=='1' and carry==1) or (a[aind]=='1' and b[bind]=='0' and carry==1) ) {ans+='0'; carry=1;}
            else if(a[aind]=='1' and b[bind]=='1' and carry==1 ) {ans+='1'; carry=1;}
            else if(a[aind]=='1' and b[bind]=='1' and carry==0 ) {ans+='0'; carry=1;}
            aind--;
            bind--;
        }
        
        if(aind>=0) {
            for(int i=aind; i>=0; i--) {
                if(a[i]=='0' and carry==1) {ans+='1'; carry=0;}
                else if(a[i]=='1' and carry==1) {ans+='0'; carry=1;}
                else if(a[i]=='0' and carry==0) ans+='0';
                else if(a[i]=='1' and carry==0) ans+='1';
            }
        }else if(bind>=0){
            for(int i=bind; i>=0; i--) {
                if(b[i]=='0' and carry==1) {ans+='1'; carry=0;}
                else if(b[i]=='1' and carry==1) {ans+='0'; carry=1;}
                else if(b[i]=='0' and carry==0) ans+='0';
                else if(b[i]=='1' and carry==0) ans+='1';
            }
        }
        
        if(carry==1) ans+='1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
