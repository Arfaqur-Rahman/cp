
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    int mini=1e9;
    long long int s=0;
    for(int i=0;i<n;i++){
        s=s+ abs(a[i]);
        if(a[i]<0){
            c++;
        }
        mini = std::min(mini, abs(a[i]));
    }
    if(c%2==1) s-= 2*mini;
    printf("%lld",s);

    return 0;
}


