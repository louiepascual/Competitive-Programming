#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	while(n--) {
		int l;
		cin >> l;

		int c[l];
		for(int i=0; i<l; i++) {
			cin >> c[i];

		}

		int count = 0;
		int smallPos = 0;
		int smallest = 99;
		int temp;

		for(int i=0; i<l; i++) {
			smallPos = i;
			smallest = c[i];
			for(int j=i+1; j<l; j++) {
				if(c[j] < smallest) {
					smallPos = j;
					smallest = c[j];
				}
			}
			for(int j=smallPos; j>=i+1; j--) {
				swap(c[j],c[j-1]);
				count++;
			}
		}

		cout << "Optimal train swapping takes " << count  << " swaps." << endl;


	}
}