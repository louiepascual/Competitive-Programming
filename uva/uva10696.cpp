#include <iostream>
using namespace std;

int main() {
	long n;
	while(cin >> n) {
		if(n == 0) break;
		cout << "f91(" << n << ") = ";
		cout << (n >= 101? n-10 : 91) << endl;
	}
}