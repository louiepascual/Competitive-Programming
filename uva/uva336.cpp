//uva336 - A Node too Far
//graph traversal, SSSP, BFS

#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

typedef vector <int> vi;

#define REP(a,b,c) for(int a=b; a<c; a++)
#define TRmivi(c,it) for(map<int,vi>::iterator it = (c).begin(); it != (c).end(); it++)
#define WHITE 0
#define BLACK 1

int main() {
	
	int c = 1;
	int n;
	while(cin >> n) {
		if(n == 0)
			break;

		map <int, vi> adjList;
		REP(i,0,n) {
			int x,y;
			cin >> x >> y;

			adjList[x].push_back(y);
			adjList[y].push_back(x);
		}

		int s,ttl;
		while(cin >> s >> ttl) {
			if(s == 0 && ttl == 0)
				break;

			map <int,int> dist;

			queue <int> q;
			q.push(s);
			dist[s] = 0;

			bool flag = false;
			while(!q.empty()) {
				int u = q.front();
				q.pop();

				if(adjList.count(u) <= 0)
				{
					flag = true;
					break;
				}


				REP(i,0,adjList[u].size()) {
					if(!dist.count(adjList[u][i]) && adjList.count(u)) {
						dist[adjList[u][i]] = dist[u] + 1;
						q.push(adjList[u][i]);
					}
				}
			}

			int count = 0;
			for(map<int,int>::iterator it = dist.begin(); it != dist.end(); it++) {
				//cout << it->first << " " << it->second << endl;
				if(it->second > ttl)
					count++;
			}
			if(!flag)
				count = count + (adjList.size() - dist.size());
			else
				count = adjList.size();

			cout << "Case " << c++ << ": ";
			cout << count << " nodes not reachable from node " << s;
			cout << " with TTL = " << ttl << ".\n";



		}
	}
}