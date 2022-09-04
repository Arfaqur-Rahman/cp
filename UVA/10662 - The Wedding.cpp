#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(),(x).end()

#define log(args...){ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cout<<endl; }


void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << " ";
	err(++it, args...);
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int T, R, H;
    while(cin>>T>>R>>H){
        int tr[T][R+1];
        for(int i=0; i<T; i++){
            for(int j=0; j<=R; j++){
                cin>>tr[i][j];
            }
        }
        int rh[R][H+1];
        for(int i=0; i<R; i++){
            for(int j=0; j<=H; j++){
                cin>>rh[i][j];
            }
        }
        int ht[H][T+1];
        for(int i=0; i<H; i++){
            for(int j=0; j<=T; j++){
                cin>>ht[i][j];
            }
        }
        //done taking input
        int tra, res, hot;
        int mini=INT_MAX;
        for(int i=0; i<T; i++){ 
            for(int j=1; j<=R; j++){
                if(tr[i][j]==0){ 
                    int x =tr[i][0]; 
                    for(int h=1; h<=H; h++){
                        if(rh[j-1][h]==0 and ht[h-1][i+1]==0){ // i+1 not i
                            int y=rh[j-1][0]; 
                            int z=ht[h-1][0];
                            if(mini>x+y+z){
                                mini = x+y+z;
                                tra=i; res=j-1; hot=h-1;
                            }
                        }
                    }

                }
            }
        }
        if(mini==INT_MAX) cout<<"Don't get married!"<<endl;
        else cout<<tra<<" "<<res<<" "<<hot<<":"<<mini<<endl;
    }

    return 0;
}




