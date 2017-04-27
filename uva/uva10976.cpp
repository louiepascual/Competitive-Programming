// uva10976 - fractions again?!
// https://uva.onlinejudge.org/external/109/10976.pdf

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
	int k;
	while(cin >> k) {

		vector< pair<int,int> > x;
		x.clear();
		for(int i=k+1; i<=k*2; i++) {
			int g = __gcd(i-k,k*i);
			if(g == i-k) {
				x.push_back(make_pair(((k*i) / g),i));
			}
		}

		printf("%d\n",(int)x.size());
		for(int i=0; i<x.size(); i++) {
			printf("1/%d = 1/%d + 1/%d\n",k,x[i].first,x[i].second);
		}
	}
}