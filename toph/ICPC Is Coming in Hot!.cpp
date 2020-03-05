#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin>>s;
	int a[10]={0};
	for(int i=0;s[i]!='\0';i++){
        a[(s[i]-48)]++;
	}
    int p=0;
	for(int i=1;i<10;i++){
        if(a[i]>a[p]) p=i;
	}
	cout<<p;
	return 0;
}

