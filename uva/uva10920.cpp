// uva10920 - spiral tap
// https://uva.onlinejudge.org/external/109/10920.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

long long foo[350][350];

int main() {
	long long sz,p;
	while(cin >> sz >> p) {
		if(sz == 0 && p == 0) break;

		//produce board
		long long line = (sz+1)/2;
		long long col = line;

		long long step = 1;
		long long n = 1;
		bool flag = false;
		while(true) {
			if(n == p) break;

			// go up
			if(p <= (n+step)) {
				line += (p - n);
				break;
			}
			else {
				n += step;
				line += step;
			}

			// go left
			if(p <= (n+step)) {
				col -= (p - n);
				break;
			}
			else {
				n += step;
				col -= step;
			}

			step++;
			
			//go down
			if(p <= (n+step)) {
				line -= (p - n);
				break;
			}
			else {
				n += step;
				line -= step;
			}

			//go right
			if(p <= (n+step)) {
				col += (p - n);
				break;
			}
			else {
				n += step;
				col += step;
			}

			step++;

		}
		cout << "Line = " << line << ", ";
		cout << "column = " << col << "." << endl;
	}
}