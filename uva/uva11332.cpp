// UVa 11332 - Summing Digits
#include <iostream>
using namespace std;

long int f(int n) {
	long s = 0;
	while(n != 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

long int g(int n) {
	while(n / 10 >= 1) {
		n = f(n);
	}
	return n;
}

int main() {
	long int n;
	while(cin >> n) {
		if(n == 0) break;

		cout << g(n) << endl;
	}
}
