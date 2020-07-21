#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum2=0;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            int sum=0;
            for(int j=0; s[j]; j++){
                sum+= (s[j] - 'A') + i + j; 
            }
            sum2+=sum;
        }
        cout<<sum2<<endl;
    }


    return 0;
}
