// uva627 - The Net
// graph theory, graph traversal, BFS

#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

#define REP(a,b,c) for(int a=b; a<c; a++)
typedef vector<int> vi;
typedef vector<vi> vii;

int main() {
	int n; // number of routers

	while(cin >> n) {
		map <int,vi> adjList;
		
		cin.ignore();
		REP(i,0,n) {
			
			int rid, cn;
			char t;

			string s;
			getline(cin,s);
			istringstream ss(s);

			ss >> rid;
			ss >> t;
			
			while(ss >> cn) {
				adjList[rid].push_back(cn);
				ss >> t;
			}
			
		}

		int testc;
		cin >> testc;
		cout << "-----\n";
	
		REP(i,0,testc) {
			int s,e;
			cin >> s >> e;

			queue <int> q;

			map<int,int> dist;
			map<int,int> parent;
			
			q.push(s);
			dist[s] = 0;
			parent[s] = -1;
			
			while(!q.empty()) {
				int u = q.front();
				q.pop();
			
				REP(i,0,adjList[u].size()) {
					if(!dist.count(adjList[u][i])) {
						q.push(adjList[u][i]);
						dist[adjList[u][i]] = dist[u] + 1;
						parent[adjList[u][i]] = u;
					}
				}
			}

			
			if(!dist.count(e)) {
				cout << "connection impossible";
			}
			else {
				int c = e;
				vi route;
				route.push_back(c);

				while(c != s) {
					route.push_back(parent[c]);
					c = parent[c];
				}

				for(int k=route.size()-1; k>=0; k--) {
					cout << route[k];

					if(k != 0)
						cout << " ";
				}
			}
			
			
			cout << endl;

		}

	}
}