#include <bits/stdc++.h>

using namespace std;

int main()
{   int a[7], i;
    int n, s=0;
    cin>>n;
    for(int i=0;i<7;i++) cin>>a[i];
    for(i=0;s<n;i++){
        i %= 7;
        s=s+a[i];
    }
    cout<<i<<endl;
    return 0;
}