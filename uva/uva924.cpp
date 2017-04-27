//uva924 - Spreading The News
// graph theory, graph traversal, BFS

#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

#define REP(a,b,c) for(int a=b; a<c; a++)

typedef vector<int> vi;
typedef map<int,vi> miv;
typedef map<int,int> mii;

int main() {
	int e;
	cin >> e;

	miv adjList;
	REP(i,0,e) {
		int fr;
		cin >> fr;

		REP (j,0,fr) {
			int k;
			cin >> k;
			adjList[i].push_back(k);	
		}
	}

	int t;
	cin >> t;
	REP(i,0,t) {
		int s;
		cin >> s;

		queue <int> q;
		q.push(s);

		mii dist;
		dist[s] = 0;

		mii day;
		day[1] = 0; 
		while(!q.empty()) {
			int u = q.front();
			q.pop();

			REP(j,0,adjList[u].size()) {
				if(!dist.count(adjList[u][j])) {
					q.push(adjList[u][j]);
					dist[adjList[u][j]] = dist[u] + 1;
					day[dist[u]+1] += 1;
				}
			}
			
		}

		int maxBoom = 0;
		int dayOfBoom = 1;
		for(mii::iterator it = day.begin(); it != day.end(); it++) {
			if(it->second > maxBoom) {
				maxBoom = it->second;
				dayOfBoom = it->first;
			}
		}

		if(maxBoom > 0)
			cout << maxBoom << " " << dayOfBoom << endl;
		else
			cout << maxBoom << endl;
	}
}