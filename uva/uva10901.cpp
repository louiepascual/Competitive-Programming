#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	freopen("in","r",stdin);
	int c;
	scanf("%d",&c);

	while(c--) {
		int n=0, t=0, m=0;
		scanf("%d %d %d", &n, &t, &m);

	
		// input
		queue< pair<int,string> > q;
		int v=0;
		string d;
		for(int i=0; i<m; i++) {
			cin >> v >> d;
			q.push(make_pair(v,d));
		}

		string side = "left";
		int cTime = 0;
		int a[1005];

		while(!q.empty()) {
			if(side == "left") {
				if(q.front().second == "right") {
					side = "right";
					cTime = cTime + t;
					continue;
				}
				int i = 0;
				while(i < n && !q.empty()) {
					if(q.front().second == "left" && q.front().first <= cTime) {
						cout << cTime + t << endl;
						q.pop();
					}
					else {
						break;
					}
					i++;
				}
				side = "right";
				cTime += t;
				
			}
			else { // right 
				if(q.front().second == "left") {
					side = "left";
					cTime = cTime + t;
					continue;
				}
				int i = 0;
				while(i < n && !q.empty()) {
					if(q.front().second == "right" && q.front().first <= cTime) {
						cout << cTime + t << endl;
						q.pop();
					}
					else {
						break;
					}
					i++;
				}
				side = "left";
				cTime += t;
			}
		}
		cout << endl;
	}
}