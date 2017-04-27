// uva11850 - alaska
// https://uva.onlinejudge.org/external/118/11850.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int gas[1500];


int main() {
	int n;
	while(scanf("%d",&n)) {
		if(n == 0) break;

		for(int i=0; i<n; i++)
			scanf("%d",&gas[i]);
		gas[n] = 1422;

		sort(gas, gas+n+1);
		bool possible = true;
		for(int i=0; i<n; i++) {
			if(gas[i+1]-gas[i] > 200)
				possible = false;
		}
		if(gas[n-1] < 1322) 
			possible = false;
		cout << (possible == true ? "POSSIBLE" : "IMPOSSIBLE") << endl;


	}
}