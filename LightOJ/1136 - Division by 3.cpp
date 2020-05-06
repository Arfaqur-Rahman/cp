#include<bits/stdc++.h>
using namespace std;
// let's start putting 1 where a number is divisible by 3, and 0 where a number is not divisible by 3, as shown below
// (1 12 123) (1234 12345 123456) (1234567 12345678 123456789)...
// (0 1 1)          (0 1 1)                    (0 1 1) ... [Here 1 means DIVISIBLE BY 3, and 0 means NOT DIVISIBLE BY 3]
// each triad contains 2 1s. To get number of triads from the beginning to a(or b), we will divide a(or b) by 3.
// if a or b is divisible by 3, we will multiply the result by 2 (because each triad contains 2 1s)
// if a or b yields a remainder of 1, we will do the exact same thing as mentioned in the previous sentence.
// if a or b yields a remainder of 2, we will add 1 to the number of triads (because the next triad's 1 needs to be added in this case)
// a or b will never yield a remainder of 3, as we are dividing them by 3!!! hahaha!
int main(){
    int t;
    cin>>t;
   for(int i=1; i<=t; i++){
        int a, b;
        cin>>a>>b;
        a--; // the range includes a itself. So we are excluding a!

        if(a%3==2) a=a/3*2 +1;
        else a=a/3*2;
       
        if(b%3==2) b=b/3*2 +1;
        else b=b/3*2;
       
        cout<<"Case "<<i<<": "<<b-a<<endl; // b-a = (all ones from beginning to b) - (all ones from beginning to a-1)
    }
}
