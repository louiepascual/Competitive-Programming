#include <iostream>
using namespace std;

typedef long long ll;

ll detCycle(ll num) {
	ll count = 1;
	while(num != 1){
		if(num % 2 == 0)
			num /= 2;
		else
			num = (3 * num) + 1;
		count++;
	}
	return count;
}

int main() {
	ll i,j;
	while(cin >> i >> j) {
		ll a,b;
		a = i;
		b = j;
		if(i > j) swap(i,j);

		ll max = 0;
		ll temp;
		for(ll t=i; t<=j; t++) {
			temp = detCycle(t);
			if(temp > max)
				max = temp;
		}

		cout << a << " " << b << " " << max << endl;
	}

}