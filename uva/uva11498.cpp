#include <iostream>
using namespace std;

int main() {
	int t;
	while(cin >> t) {
		if(t == 0) break;
		
		int h,k,x,y;
		cin >> h >> k;
		while(t--) {
			cin >> x >> y;
			if(x == h || y == k)
				cout << "divisa\n";
			else if(x > h && y > k)
				cout << "NE\n";
			else if(x < h && y > k)
				cout << "NO\n";
			else if(x < h && y < k)
				cout << "SO\n";
			else if(x > h && y < k)
				cout << "SE\n";
		}
	}
}