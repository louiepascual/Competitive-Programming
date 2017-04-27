// cc_permexis
// https://www.codechef.com/COOK75/problems/PERMEXIS

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;

		vector<long int> arr(n);

		for(int i=0; i<n; i++)
			cin >> arr[i];

		sort(arr.begin(),arr.end());

		bool possible = true;
		for(int i=0; i<n-1; i++) {
			if(!(abs(arr[i]-arr[i+1]) <= 1)) {
				possible = false;
				break;
			}
		}

		if(possible)
			printf("YES\n");
		else
			printf("NO\n");
			

	}
}