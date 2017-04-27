#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	while(cin >> n) {
		int a[n];
		int c[n-1];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}

		bool isJolly = true;

		for(int i=0; i<n-1; i++) {
			int t = abs(a[i]-a[i+1]);
			if(t <= 0 || t >= n) {
				isJolly = false;
				break;
			}

			c[i] = t;

			for(int j=0; j<i;j++) {

				if(t == c[j] && j != i) {
					isJolly = false;
					break;
				}
			}
			if(isJolly == false)
				break;
		}

		if(isJolly)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;

	}
	
}