// uva352 - The Seasonal War
// graph, DFS, floodfill, # of components

#include <iostream>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

#define REP(a,b,c) for(int a=b; a<c; a++)
#define DFS_BLACK 1
#define DFS_WHITE 0

typedef pair<int,int> pii;
typedef vector<pii> vpii;

vector <pii> vertexList;
vector < vector<pii> > adjList;
vector <int> visited;


int retIndex(pii u) {
	REP(i,0,adjList.size()) {
		if(u.first == vertexList[i].first && 
			u.second == vertexList[i].second) {
			return i;
		}
	}
	return -1;
}

void dfs(pii u) {
	int ind = retIndex(u);
	visited[ind] = DFS_BLACK;
	REP(i,0,adjList[ind].size()) {
		if(visited[retIndex(adjList[ind][i])] == DFS_WHITE) {
			dfs(adjList[ind][i]);
		}
	}
}



int main() {
	int t;

	int count = 1;
	while(cin >> t) {

		vertexList.clear();
		adjList.clear();
		visited.clear();

		REP(i,0,t) {
			REP(j,0,t) {
				int x,y;
				
				char val;
				cin >> val;

				if(val == '1') {
					vector<pair <int,int> >temp;
					vertexList.push_back(make_pair(i,j));
					adjList.push_back(temp);
					visited.push_back(DFS_WHITE);
				}
			}
		}

		REP(i,0,vertexList.size()) {
			REP(j,i+1,vertexList.size()) {
				if(abs(vertexList[i].first - vertexList[j].first) <= 1 &&
					abs(vertexList[i].second - vertexList[j].second) <=1) {
					adjList[i].push_back(vertexList[j]);
					adjList[j].push_back(vertexList[i]);
				}
			}
		}

		int numComponent = 0;
		REP(i,0,vertexList.size()) {
			if(visited[i] == DFS_WHITE) {
				numComponent++;
				dfs(vertexList[i]);
			}
		}

		cout << "Image number " << count++ << " contains " << numComponent << " war eagles.";
		cout << endl;

		
	}
}
