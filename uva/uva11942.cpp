// UVa 11942 - Lumberjack Sequence
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	cout << "Lumberjacks:\n";

	while(t--) {
		int n[10];
		bool ordered = true;

		for(int i=0; i<10; i++) {
			cin >> n[i];
		}

		if(n[0] < n[9]) {
			for(int i=0; i<9; i++) {
				if(n[i] > n[i+1]) {
					ordered = false;
					break;
				}
			}
		}
		else {
			for(int i=0; i<9; i++) {
				if(n[i] < n[i+1]) {
					ordered = false;
					break;
				}
			}
		}

		if(ordered)
			cout << "Ordered" << endl;
		else
			cout << "Unordered" << endl;
	}
}