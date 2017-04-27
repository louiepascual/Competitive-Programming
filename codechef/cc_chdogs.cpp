// codechef - chdogs
// https://www.codechef.com/OCT16/problems/CHDOGS

#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		double s,v;
		cin >> s >> v;

		double t = (2*s)/(3*v);
		cout << fixed << setprecision(9) << t << endl;
	}
}