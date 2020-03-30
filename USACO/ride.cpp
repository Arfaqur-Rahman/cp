/*
ID: arfaqur1
TASK: ride
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b; fin>>a>>b; int ai=1, bi=1;
    for(int i=0; a[i]; i++){ai*= (a[i]-'A'+1);}
    for(int i=0; b[i]; i++){bi*= (b[i]-'A'+1);}
	fout<<((ai%47)==(bi%47)? "GO":"STAY")<<endl;
}
