#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c=0;
    cin>>n>>m; // n even, m odd. Sum of two even numbers is always even. Similarly, sum of two odd numbers is also always even.
    cout<<n*(n-1)/2 + m*(m-1)/2; //if 2 balls r picked, the number of ways we can pick them so that there sum is always even
}
