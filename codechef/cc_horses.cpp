// codechef - horses
// https://www.codechef.com/problems/HORSES

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define INF 1000000005

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<long long> s(n);

		for(int i=0; i<n; i++)
			cin >> s[i];

		long long minval = INF;
		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				minval = min(minval, abs(s[i]-s[j]));
			}
		}

		cout << minval << endl;
	}
}