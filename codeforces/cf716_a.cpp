#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


int main() {
	//freopen("in","r",stdin);
	long long n,c;
	cin >> n >> c;

	vector<long long> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	int count = 1;
	for(int i=1; i<n; i++) {
		if((a[i] - a[i-1]) <= c) {
			count++;
		}
		else {
			count = 1;
		}
	}

	cout << count << endl;
}