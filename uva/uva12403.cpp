// UVa 12403 - Save Setu
#include <iostream>
using namespace std;
int main() {
	int t,money=0,tmp;
	cin >> t;
	while(t--) {
		string ops;
		cin >> ops;

		if(ops == "donate") {
			cin >> tmp;
			money += tmp;
		}
		else if(ops == "report") {
			cout << money << endl;
		}

	}
}