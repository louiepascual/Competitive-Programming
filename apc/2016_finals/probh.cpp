/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem H: Counting Paths
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
using namespace std;
typedef vector<int> vi;

struct Node {
	int n;
	int depth;
};

int main() {
	ifstream fin("probh.in");

	int n;
	fin >> n;
	while(n--) {
		// reset adjList
		vector<vi> adjList;
		adjList.clear();

		// disregard the G character
		char c;
		fin >> c;

		// get the number of vertices and edges
		int v,e;
		fin >> v >> e;

		// initiate the adjacency list
		for(int i=0; i<=v; i++) {
			vi temp;
			adjList.push_back(temp);
		}

		for(int j=0; j<e; j++) {
			// get the source and sink
			int source, sink;
			fin >> source >> sink;

			// push the sink to the adjList of source
			adjList[source].push_back(sink);
			
		}

		// disregard the T character
		fin >> c;
		
		// get number of test cases
		int t;
		fin >> t;
		while(t--) {
			// get start node, end node, and length b/w nodes
			int start,end,len;
			fin >> start >> end >> len;

			// initialize queue, push start node
			queue<Node> s;
			Node x;
			x.depth = 0;
			x.n = start;

			s.push(x);
			int depth = 0;
			int count=0;
			while(!s.empty()) {
				// get top of stack
				Node p = s.front(); s.pop();

				int ind = p.n;

				// traverse through adjacency list of node ind
				for(int i=0; i<adjList[ind].size(); i++) {
					if(p.depth < len) {
						Node temp;
						temp.n = adjList[ind][i];
						temp.depth = p.depth+1;

						// check if the path is already of the specified length
						if(temp.depth == len) {
							// check if with the given depth, the end is the specified end node
							if(temp.n == end) {
								count++;
							}
						}
						else {
							s.push(temp);
						}	
					}
				}		
			}
			cout << count << endl;
		}
	}
}