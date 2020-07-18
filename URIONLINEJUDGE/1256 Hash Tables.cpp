#include<bits/stdc++.h>

using namespace std;

int r() {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}



int main(){
    int t= r();
    while(t--){
        int m=r(), c=r();
        int a[c];
        for(int i=0; i<c; i++) a[i]=r();

        vector< vector<int> > v(m);

        for(int i=0; i<c; i++){
            v[a[i]%m].push_back(a[i]);
        }

        for(int i=0; i<m; i++){
            printf("%d -> ", i);
            for(int j=0; j<v[i].size(); j++){
                printf("%d -> ", v[i][j]);
            }
            printf("\\\n");
        }
        if(t!=0) printf("\n");
    }

}




