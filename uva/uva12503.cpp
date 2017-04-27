#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	freopen("in","r",stdin);
	int t;
	scanf("%d",&t);
	
	while(t--) {
		int n;
		scanf("%d",&n);

		vector<int> a(n); 
		int p = 0, ind = 0;
		string move;

		for(int i=0; i<n; i++) {
			cin >> move;
			
			if(move == "LEFT") {
				p -= 1;
				a[i] = -1;
			}
			else if(move == "RIGHT") {
				p += 1;
				a[i] = 1;
			}
			else if(move == "SAME") {
				cin >> move >> ind;
				p += a[ind-1];
				a[i] = a[ind-1];
				
				
			}
		}

		printf("%d\n",p);

	}
}