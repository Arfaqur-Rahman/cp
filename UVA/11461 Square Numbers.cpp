/*Here in this solution prefix sum concept is used*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mx=100000+1;
bool a[mx];
void init(){
    for(int i=1; i<=mx; i++){
        int sqr= sqrt(i);
        if(sqr*sqr==i) a[i]=true;
    }
}

ll counte[mx];

void counter(){
    int c=0;
    for(int i=1; i<=mx; i++){
        if(a[i]) c++;
        counte[i]=c;
    }
}

int main()
{
    init();
    counter();
    int n, m;
    while(cin>>n>>m && n && m){
        cout<<counte[m]-counte[n-1]<<endl;
    }
    return 0;
}

/*Obvious approach: (Also gets ACCEPTED)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while(cin>>n>>m && n && m){
        int c=0;
        for(int i=n; i<=m; i++){
            int sqr=sqrt(i);
            if(sqr*sqr==i) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
*/
