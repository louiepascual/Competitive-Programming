// codeforce 467A
// http://codeforces.com/problemset/problem/467/A
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int p,q,c = 0;
	for(int i=0; i<t; i++) {
		cin >> p >> q;
		if(p+2 <= q)
			c++;
	}
	cout << c << endl;
}