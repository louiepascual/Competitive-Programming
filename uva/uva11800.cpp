#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);

	for(int i=0; i<t; i++) {
		int p[4][2];

		// input data
		int sumx = 0, sumy = 0;
		for(int j=0; j<4; j++) {
			scanf("%d %d",&p[j][0],&p[j][1]);
			sumx += p[j][0];
			sumy += p[j][1];
		}	

		if(sumx == sumy)
			printf("Square");

	}
	

}