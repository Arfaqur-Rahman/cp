#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    double a, b, c;

    while( cin>>a>>b>>c ){

    double halfperimeterOfVioletTriangle = (a+b+c)/2.0;
    double areaOfVioletTriangle =sqrt( halfperimeterOfVioletTriangle * (halfperimeterOfVioletTriangle - a) * (halfperimeterOfVioletTriangle - b) * (halfperimeterOfVioletTriangle - c) );
    //double areaOfVioletTriangle = a*b/2;  this won't work because we don't know if the triangle is always a right triangle
     
    double radiusOfYellowCircle = a*b*c/(4*areaOfVioletTriangle); // radius of outer circle of a triangle (circumradius) = a*b*c/(4*areaOfTriangle)
    double areaOfYellowCircle = acos(-1)*radiusOfYellowCircle*radiusOfYellowCircle;
    // double areaOfYellowCircle= acos(-1)* c*c/4 =>This won't work because we don't know if c passes through the center
    
    double radiusOfRedCircle = (2*areaOfVioletTriangle)/(a+b+c); // radius inner circle of a triangle (inradius) = 2*areaOfTriangle/(a+b+c) 
    double areaOfRedCircle = acos(-1)*radiusOfRedCircle*radiusOfRedCircle;
    cout<<fixed<<setprecision(4)<<areaOfYellowCircle-areaOfVioletTriangle<<" "<<areaOfVioletTriangle-areaOfRedCircle<<" "<<areaOfRedCircle<<endl;
    }

}
