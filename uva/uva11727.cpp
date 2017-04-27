#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i=1; i<=t; i++) {
		int a,b,c;
		cin >> a >> b >> c;

		int mid = a;

		if(a > b && b > c) mid = b;
		else if(c > b && b > a) mid = b;
		else if(b > a && a > c) mid = a;
		else if(c > a && a > b) mid = a;
		else if(b > c && c > a) mid = c;
		else if(a > c && c > b) mid = c;

		if(a == b) mid = a;
		if(b == c) mid = b;
		if(c == a) mid = c;

		cout << "Case " << i << ": " << mid << endl;
	}
}