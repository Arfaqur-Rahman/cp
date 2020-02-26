
#include <iostream>

using namespace std;

int main()
{
    int a[5][5];
    int zr,zc;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){ 
            cin>>a[i][j]; 
            if(a[i][j]==1){
                zr=i;
                zc=j;
            }
        }
    }
    cout<<abs(2-zr) + abs(2-zc);
    return 0;
}
