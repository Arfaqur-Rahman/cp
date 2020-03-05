#include <iostream>
#define sc scanf
#define pf printf
using namespace std;

int main() {
	int s, a, b, c; sc("%d %d %d %d", &s, &a, &b, &c); pf("%d",s-a-b-c);
	return 0;
}
