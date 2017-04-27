#include <iostream>
using namespace std;

typedef unsigned int ui;

ui flip(ui n){
	ui nFlip = 0;
	while(n != 0){
		nFlip = (nFlip * 10) + (n % 10);
		n /= 10;
	}
	return nFlip;
}

bool isPalindrome(ui &n) {
	return (n == flip(n));
}

int main() {
	ui t;
	cin >> t;

	while(t--) {
		ui n;
		int count = 0;
		cin >> n;

		do {
			n = n + flip(n);
			count++;
		} while(!isPalindrome(n));

		cout << count << " " << n << endl;
	}
}