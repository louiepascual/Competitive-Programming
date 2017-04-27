#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("in","r",stdin);
	int n, m, c;

	int index = 1;
	while(scanf("%d %d %d",&n,&m,&c)) {		
		if(n == 0 && m == 0 && c == 0) break;
		vector<int> ci(n+1); // amperes of devices

		for(int i=1; i<=n; i++) {
			scanf("%d",&ci[i]);
		}

		int t = 0, cload = 0, maxload = 0;
		vector<bool> load(n+1);
		for(int i=0; i<m; i++) {
			scanf("%d",&t);
			if(load[t] == false) {
				load[t] = true;
				cload += ci[t];
			}
			else {
				load[t] = false;
				cload -= ci[t];
			}

			if(cload > maxload) {
				maxload = cload;
			}

		}

		printf("Sequence %d\n",index++);
		if(maxload > c) {
			printf("Fuse was blown.\n");
		}
		else {
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n",maxload);
		}
		printf("\n");
	}
}