// codeforces 263 A
// http://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <cmath>
using namespace std;

int foo() {
	int n;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cin >> n;
			if(n == 1) {
				return abs(i-2) + abs(j-2);
			}
		}
	}
	return 0;	
}

int main() {
	cout << foo() << endl;
}