/*
from 1 to 4	few
from 5 to 9	several
from 10 to 19	pack
from 20 to 49	lots
from 50 to 99	horde
from 100 to 249	throng
from 250 to 499	swarm
from 500 to 999	zounds
from 1000	legion
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin>>n; cout<<(
      (  n>=1 && n<=4  ? "few" : 
      (  n>=5 && n<=9  ? "several" : 
      (  n>=10 && n<=19  ? "pack" : 
      (  n>=20 && n<=49  ? "lots" : 
      (  n>=50 && n<=99  ? "horde" : 
      (  n>=100 && n<=249  ? "throng" : 
      (  n>=250 && n<=499 ? "swarm" : 
      (  n>=500 && n<=999  ? "zounds" : "legion") ) ) ) ) ) ) )
      );
}
