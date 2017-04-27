// uva10935 - throwing cards away I
// https://uva.onlinejudge.org/external/109/10935.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	while(scanf("%d",&n)) {
		if(n == 0) break;

		queue<int> deck;
		for(int i=0; i<n; i++)
			deck.push(i+1);

		vector<int> discarded;
		int t;
		while(deck.size() > 1) {
			discarded.push_back(deck.front());
			deck.pop();

			deck.push(deck.front());
			deck.pop();
		}

		printf("Discarded cards:");

		for(int i=0; i<discarded.size(); i++) {
			printf(" %d",discarded[i]);
			if(i != discarded.size()-1)
				printf(",");
		}
		printf("\n");

		printf("Remaining card: %d\n",deck.front());
		deck.pop();	
			
	}

}