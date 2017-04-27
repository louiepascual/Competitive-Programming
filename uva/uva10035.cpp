//uva10035 - Primary Arithmetic
#include <iostream>
using namespace std;

int main() {
	unsigned int l,r;

	while(cin >> l >> r) {
		if(l == 0 && r == 0)
			break;

		int c=0;
		int mod = 10;
		int carryStat = 0;
		while(l > 0 || r > 0) {
			int x = l%mod;
			int y = r%mod;
			if(x+y+carryStat >= 10) {
				c++;
				carryStat = 1;
			}
			else {
				carryStat = 0;
			}
			l /= mod;
			r /= mod;
		}
		if(c == 0)
			cout << "No carry operation." << endl;
		else if(c == 1)
			cout << "1 carry operation." << endl;
		else
			cout << c << " carry operations." << endl;
	}
}