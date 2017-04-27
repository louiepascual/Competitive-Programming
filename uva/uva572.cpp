// uva572 - Oil Deposits
// graph, DFS, # of components, floodfill

#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

typedef pair<int,int> pii;
typedef vector<pii> vpii;

#define REP(a,b,c) for(int a=b; a<c; a++)
#define DFS_BLACK 1
#define DFS_WHITE 0

vector < pair<pii,vpii> > adjList;
vector <int> visited;

int retIndex(pii u) {
	REP(i,0,adjList.size()) {
		if(adjList[i].first.first == u.first &&
			adjList[i].first.second == u.second) {
			return i;
		}
	}
	return -1;
}

void dfs(pii u) {
	int ind = retIndex(u);
	visited[ind] = DFS_BLACK;
	REP(i,0,adjList[ind].second.size()) {
		if(visited[retIndex(adjList[ind].second[i])] == DFS_WHITE) {
			dfs(adjList[ind].second[i]);
		}
	}
}

int main() {
	int m,n;

	while(cin >> m >> n) {
		if(m == 0)
			break;

		adjList.clear();
		visited.clear();
		
		REP(i,0,m) {
			REP(j,0,n) {
				char c;
				cin >> c;

				if(c == '@') {
					pair<pii,vpii> temp;
					adjList.push_back(temp);
					adjList[adjList.size()-1].first = make_pair(i,j);
					visited.push_back(DFS_WHITE);
				}

			}
		}

		REP(i,0,adjList.size()) {
			REP(j,i+1,adjList.size()) {
				if(abs(adjList[i].first.first - adjList[j].first.first) <= 1 &&
					abs(adjList[i].first.second - adjList[j].first.second) <= 1) {

					adjList[i].second.push_back(adjList[j].first);
					adjList[j].second.push_back(adjList[i].first);
				} 
			}
		}

		int numberComponents = 0;
		REP(i,0,adjList.size()) {
			if(visited[retIndex(adjList[i].first)] == DFS_WHITE) {
				numberComponents++;
				dfs(adjList[i].first);
			}
		}

		cout << numberComponents << endl;



	}
}