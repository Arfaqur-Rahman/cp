#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    cin>>k>>n>>w;
    int ans= ((k*w*(w+1)/2)-n);
    cout<<(  ans >0 ? ans : 0 );
    return 0;
}
