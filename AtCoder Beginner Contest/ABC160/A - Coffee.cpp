#include<stdio.h>
using namespace std;

int main(){
  char c[6];
  scanf("%s",c);
  puts( (c[2]==c[3] && c[4]==c[5]) ? "Yes" : "No");
}
