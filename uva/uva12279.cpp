// UVa 12279 - emoogle balance
// super easy, adhoc

#include <iostream>
using namespace std;

int main() {
	int t;
	int c = 1;
	while(cin >> t) {
		if(t == 0)
			break;

		int given=0, notgiven=0; 
		int tmp;
		while(t--) {
			cin >> tmp;
			if(tmp == 0)
				given++;
			else
				notgiven++;
		}

		cout << "Case " << c++ << ": " << notgiven-given << endl;
	}
}