// uva674 - coin change
// https://uva.onlinejudge.org/external/6/674.pdf

#include <iostream>
#include <cstring>
using namespace std;

int S[5] = {1,5,10,25,50};

int table[7501][5];

int countChange(int n, int m) {
	// if change is 0, then there is only 1 solution
	if(n == 0)
		return 1;
	
	// if change is less than 0, then there is no solution
	if(n < 0 || m < 0)
		return 0;

	return countChange(n,m-1) + countChange(n-S[m], m);

}

int change(int n, int m) {
	memset(table,0,sizeof(table));

	// set base case n == 0 to 1
	for(int j=0; j<m; j++)
		table[0][j] = 1;

	for(int i=1; i<n+1; i++) {
		for(int j=0; j<m; j++) {
			int x,y;
			
			// check if 
			if(j >= 1)
				y = table[i][j-1];
			else
				y = 0;

			if(i - S[j] >= 0)
				x = table[i - S[j]][j];
			else
				x = 0;

			table[i][j] = x + y;
		}
	}

	return table[n][m-1];
}

int main() {
	int n;
	
	while(cin >> n) {
		//cout << countChange(n,4) << endl;
		cout << change(n,5) << endl;
	}



}