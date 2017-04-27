// codechef - johny
// https://www.codechef.com/problems/JOHNY

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		vector<long long> a(n+1);
		a[0] = -1;
		for(int i=1; i<=n; i++)
			cin >> a[i];

		int k;
		cin >> k;

		long long val = a[k];
		sort(a.begin(), a.end());
		
		for(int i=1; i<=n; i++) {
			if(val == a[i]) {
				cout << i << endl;
				break;
			}
		}
	}
}