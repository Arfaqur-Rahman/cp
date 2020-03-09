#include <bits/stdc++.h>

using namespace std;

float pcheck(double a){
    if(a>=80 && a<=100) return 4.00;
    else if(a>=75 && a<=79) return 3.75;
    else if(a>=70 && a<=74) return 3.50;
    else if(a>=65 && a<=69) return 3.25;
    else if(a>=60 && a<=64) return 3.00;
    else if(a>=55 && a<=59) return 2.75;
    else if(a>=50 && a<=54) return 2.50;
    else if(a>=45 && a<=49) return 2.25;
    else if(a>=40 && a<=44) return 2.00;
    else if(a>=0 && a<=39) return 0.00;
    
}

int main() {
	int t,p=0;
	cin>>t;
	while(t--){
		int n,cc=0, failcheck=0;
		double mc=0.0;
		cin>>n;
		while(n--){
		    double a;
		    int b;
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

		//else if(failcheck==0)cout<<"Case "<< ++p <<": "<<mc/cc<<endl;
		else if(failcheck==0)printf("Case %d: %.02f",t,mc/cc);
	}
	return 0;
}
//CGPA, the Golden Egg!


