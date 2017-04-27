// codechef - xentask
// https://www.codechef.com/MARCH17/problems/XENTASK

#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll x[20001];
ll y[20001];

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		for(int i=0; i<n; i++)
			cin >> x[i];
		for(int i=0; i<n; i++)
			cin >> y[i];

		ll s1=x[0],s2=y[0];
		for(int i=1; i<n; i++) {
			if(i%2 != 0) {
				s1 += y[i];
				s2 += x[i];
			}
			else {
				s1 += x[i];
				s2 += y[i];
			}
		}

		cout << min(s1,s2) << endl;
	}
}