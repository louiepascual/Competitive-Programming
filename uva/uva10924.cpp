#include <iostream>
using namespace std;

bool isPrime(int val) {
	for(int i=val-1; i>=2; i--) {
		if(val % i == 0) return false;
	}
	return true;
}

int main() {
	string e;

	while(cin >> e) {
		int sum = 0;
		for(int i=0; i<e.length(); i++) {
			if(e[i] >= 'a' && e[i] <= 'z')
				sum += e[i] - 96;
			if(e[i] >= 'A' && e[i] <= 'Z')
				sum += e[i] - 64 + 26; 
		}

		if(isPrime(sum))
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl;
	}
}