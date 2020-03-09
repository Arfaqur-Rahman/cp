#include <bits/stdc++.h>

using namespace std;

double pcheck(double a){
    if(a>=80 ) return 4.00;
    else if(a>=75) return 3.75;
    else if(a>=70 ) return 3.50;
    else if(a>=65) return 3.25;
    else if(a>=60 ) return 3.00;
    else if(a>=55) return 2.75;
    else if(a>=50 ) return 2.50;
    else if(a>=45 ) return 2.25;
    else if(a>=40 ) return 2.00;
    else if(a>=0 ) return 0.00;
    
}

int main() {
	int t,p=0;
	cin>>t;
	while(t--){
		int n, failcheck=0;
		double cc=0.0, mc=0.0;
		cin>>n;
		while(n--){
		    double a, b;
		    cin>>a>>b;
		    a=pcheck(a);
		    if(a==0.0) failcheck++;
		    else{
				mc+=(a*b);
		    	cc+=b;
			}
		}
		if(failcheck==1) cout<<"Case "<< ++p <<": "<<"Sorry, you have failed in 1 course!"<<endl;
		else if(failcheck>1) cout<<"Case "<< ++p <<": "<<"Sorry, you have failed in "<<failcheck<<" courses!"<<endl;
		else if(failcheck==0) printf("Case %d: %.02f\n", ++p, mc/cc);
	}
	return 0;
}


