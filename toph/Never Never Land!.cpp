#include <bits/stdc++.h>

using namespace std;

int main() {
	char a[100];  int c=0;
	scanf("%s", a);
	for(int i=0; a[i]; i++){ if(a[i]=='n') c++; } cout<<c;
	return 0;
}
