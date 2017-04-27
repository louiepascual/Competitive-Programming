// codechef - extran
// https://www.codechef.com/MARCH17/problems/EXTRAN

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

typedef unsigned long long ull;

int main() {
	int t,n;
	cin >> t;

	while(t--) {
		cin >> n;

		vector<ull> a(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}

		sort(a.begin(),a.end());
		ull diff_lower, diff_upper;
		diff_lower = a[1] - a[0];
		diff_upper = a[n-1] - a[n-2];

		if(diff_lower <= 1 && diff_upper <= 1) {
			ull repeating;
			for(int i=1; i<n; i++){
				if(a[i] == a[i-1]) {
					repeating = a[i];
					break;
				}
			}
			cout << repeating << endl;
		}
		else if(diff_lower > 1) {
			cout << a[0] << endl;
		}
		else {
			cout << a[n-1] << endl;
		}
	}
} 