#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
int main() {
	ll n, k;
	while(cin >> n >> k) {
		cout << n+((n-1)/(k-1)) << endl;
	}
}