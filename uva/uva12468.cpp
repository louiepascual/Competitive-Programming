// 12468 - Zapping
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	//freopen("in","r",stdin);
	int s, d;

	while(scanf("%d %d",&s,&d)) {
		if(s == -1 && d == -1) break;

		int n;
		n = abs(s-d);

		int r;
		if(s < d) {
			r = s + (100-d);	
		}
		else {
			r = d + (100-s);
		}

		cout << (n > r ? r : n) << endl;
		

	}
}