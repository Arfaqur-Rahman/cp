#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;

    while(cin>>n>>m && n && m){
        char arr[n][m];

        for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>arr[i][j];

        int a, b;
        cin>>a>>b;
        
        int times= b/m;
        int again= a/n;
        for(int i=0; i<n; i++){
            int z=again;
            while(z--){
                for(int j=0; j<m; j++){
                    int k=times;
                    while(k--) cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
        //After each test case, print one blank line.
        cout<<endl;
    }

    return 0;
}
