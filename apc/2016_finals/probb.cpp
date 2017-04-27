/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem B: In Case of Emergency
*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

#define DFS_BLACK 1
#define DFS_WHITE 0
typedef vector<string> vs;
typedef pair<string,vs> psvs;

vector<psvs> adjList;
vector<bool> visited;

int retIndex(string s) {
	for(int i=0; i<adjList.size(); i++) {
		if(s == adjList[i].first) {
			return i;
		}
	}
	return -1;
}

void dfs(string s) {
	int ind = retIndex(s);
	visited[ind] = DFS_BLACK;

	for(int i=0; i<adjList[ind].second.size(); i++) {
		if(visited[retIndex(adjList[ind].second[i])] == DFS_WHITE) {
			dfs(adjList[ind].second[i]);
		}
	}
}

int main() {
	ifstream fin("probb.in");

	string l,m,r;
	while(cin >> l >> m >> r) {
		vs temp;
		if(retIndex(l) == -1) {
			psvs t = make_pair(l,temp);
			adjList.push_back(t);	
			visited.push_back(false);
		}
		adjList[retIndex(l)].second.push_back(r);

		if(retIndex(r) == -1) {
			psvs t = make_pair(r,temp);
			adjList.push_back(t);
			visited.push_back(false);
		}
		adjList[retIndex(r)].second.push_back(l);
	}

	int n = 0;

	for(int i=0; i<adjList.size(); i++) {
		if(visited[retIndex(adjList[i].first)] == DFS_WHITE) {
			dfs(adjList[i].first);
			n++;	
		}
	}
	cout << n << endl;



}