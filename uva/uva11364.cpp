#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int s;
		cin >> s;

		int a[s];
		for(int i=0; i<s; i++)
			cin >> a[i];

		//sort
		int temp;
		for(int i=0; i<s; i++) {
			for(int j=i+1; j<s; j++) {
				if(a[i] > a[j]) {
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}
		}

		//assess
		int dist = 0;
		for(int i=0; i<s-1; i++) {
			dist += a[i+1] - a[i];
		}
		cout << dist*2 << endl;
	}
}