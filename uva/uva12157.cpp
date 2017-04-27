// UVa12157 - Tariff plan
#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("in","r",stdin);
	int t, n;
	scanf("%d",&t);

	for(int k=1; k<=t; k++) {
		scanf("%d",&n);
		int c;

		int cost_mile = 0, cost_juice = 0;
		for(int i=0; i<n; i++) {
			scanf("%d",&c); 
			cost_mile += ((c/30) + 1) * 10;
			cost_juice += ((c/60) + 1) * 15;
		}

		if(cost_juice == cost_mile) {
			printf("Case %d: Mile Juice %d\n",k,cost_mile);
		}
		else if(cost_mile < cost_juice) {
			printf("Case %d: Mile %d\n",k,cost_mile);	
		}
		else {
			printf("Case %d: Juice %d\n",k,cost_juice);
		}
	}
}