#include <bits/stdc++.h>
using namespace std;

main(){
    char m[4][4];
    for(int i=0; i<4; i++) for(int j=0; j<4; j++) cin>>m[i][j];

    for(int i=1; i<4; i++) for(int j=1; j<4; j++){
        if(m[i-1][j-1]==m[i-1][j] && m[i-1][j]==m[i][j-1] ) return cout<<"YES", 0; //##
                                                                                   //#.
        else if(m[i-1][j-1]==m[i-1][j] && m[i-1][j]==m[i][j] ) return cout<<"YES", 0;//##
                                                                                     //.#
        else if(m[i-1][j-1]==m[i][j-1] && m[i-1][j-1]==m[i][j] ) return cout<<"YES", 0;//#.
                                                                                       //##
        else if(m[i-1][j]==m[i][j-1] && m[i-1][j]==m[i][j] ) return cout<<"YES", 0;    //.#
                                                                                       //##
    }

    cout<<"NO";
}

//  ##|##|#.|.#
//  #.|.#|##|##
