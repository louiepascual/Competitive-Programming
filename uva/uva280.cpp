// UVa 280 - Vertex
// Graph Traversal

#include <iostream>
#include <vector>
#include <stack>
#include <fstream>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

int main() {
	
	int n;

	while(cin >> n)
	{
		if(n == 0)
			break;

		vii adjList;

		for(int i=0; i<=n; i++)
		{
			vi tt;
			adjList.push_back(tt);
		}

		int r;
		while(cin >> r)
		{
			if(r == 0)
				break;
		
			int c;
			while(cin >> c)
			{
				if(c == 0)
					break;

				adjList[r].push_back(c);
			}
		}

		int t;
		cin >> t;
		
		int s;
		for(int i=0; i<t; i++)
		{
			cin >> s;

			bool visited[n+1];
			for(int g=0;g<=n;g++)
				visited[g] = false;

			stack <int> k;
			k.push(s);

			int first = 1;
			while(!k.empty())
			{
				int node;
				node = k.top();
				k.pop();
				
				if(first != 1)
					visited[node] = true;
				first++;

				for(int j=0; j<adjList[node].size(); j++)
				{
					if(!visited[adjList[node][j]])
						k.push(adjList[node][j]);
				}
			}
			vector<int> notVisited;
			int count = 0;
			for(int i=1; i<=n; i++)
			{
				if(visited[i] == false)
					notVisited.push_back(i);
			}

			if(notVisited.size() > 0)
				cout << notVisited.size() << " ";
			else
				cout << notVisited.size();

			for(int i=0; i<notVisited.size(); i++)
			{
				cout << notVisited[i];			
				if(i != notVisited.size()-1)
					cout << " ";
			}
			cout << endl;
		}
	}
}