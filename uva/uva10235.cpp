#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<bool> vb;
typedef vector<int> vi;
typedef long long ll;

vi sieve(long n) {
	vb a;
	vi num;

	for(int i=0; i <= n; i++)
		a.push_back(true);

	for(int i = 2; i <= sqrt(n); i++) {
		if(a[i] == true) {
			for(int j=(i*i); j <= n; j+=i) {
				a[j] = false;
			}
		}
	}

	for(int i=2; i <= n; i++) {
		if(a[i] == true)
			num.push_back(i);
	}

	return num;
}

bool isPrime(vi &num, ll &n) {
	if (n == 1) return true;
	for(int i=0; i<num.size(); i++)
		if(num[i] == n) return true;
	return false;

}

ll flip(ll n) {
	ll e;
	int mult = 1;
	int temp;
	while(n != 0) {
		temp = n % 10;
		n /= 10;
		e = e * 10 + temp;

	}
	return e;
}

int main() {
	vi num = sieve(1000000);
	ll n;

	while(cin >> n) {
		ll f = flip(n);
		if(!isPrime(num,n)) cout << n << " is not prime." << endl;
		else if(!isPrime(num,f) || n == f) cout << n << " is prime." << endl;
		else cout << n << " is emirp." << endl;
	}
}