// uva10107 - what is the median?
// https://uva.onlinejudge.org/external/101/10107.pdf

#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll foo[10005];

int main() {
	ll val, i=0;
	while(cin >> val) {
		foo[i] = val;
		i++;

		sort(foo,foo+i);
		if(i % 2 == 0)
			cout << (int)((foo[(i/2)-1] + foo[i/2])/2) << endl;
		else
			cout << foo[(i/2)] << endl;
	}	
}