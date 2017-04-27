// UVa 11764 - Jumping Mario
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t = 0;
	cin >> t;
	for(int i=1; i<=t; i++) {
		int n = 0;
		cin >> n;

		vector <int> w; // wall sizes
		int temp;
		while(n--) {
			cin >> temp;
			w.push_back(temp);
		}

		int hj = 0; // high jumps
		int lj = 0; // low jumps

		for(int j=0; j<w.size()-1; j++) {
			if(w[j] > w[j+1])
				lj++;
			else if(w[j] < w[j+1])
				hj++;
		}
		printf("Case %d: %d %d\n",i,hj,lj);
	}
}