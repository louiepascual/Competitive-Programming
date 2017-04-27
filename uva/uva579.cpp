#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int h,m;
	char t;

	while(cin >> h >> t >> m) {
		if(h == 0 && m == 0) break;
		if(h == 12) h = 0;

		double hdeg = (h*30) + (m/60.0) * 30;
		double mdeg = m * 6.0;
		
		cout << setprecision(3) << fixed;
		cout << ( abs(hdeg - mdeg) > 180? 360 - abs(hdeg - mdeg) : abs(hdeg - mdeg));
		cout << endl;
	}
}