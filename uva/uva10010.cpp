// uva10010 - where's waldorf?
// https://uva.onlinejudge.org/external/100/10010.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <cmath>
using namespace std;

#define INF 1e30

typedef long long ll;

char board[55][55];

pair<int, int> solve(string s, int m, int n) {
	int slen = s.length();
	string t;

	// search for match
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(board[i][j] == s[0]) {
				
				t = "";
				// get upper vertical
				if(i+1-slen >= 0) {
					for(int k=i; k>=(i+1-slen); k--)
						t += board[k][j];	
				}

				if(t == s)
					return make_pair(i+1,j+1);

				t = "";
				// get lower vertical
				if(i-1+slen < m) {
					for(int k=i; k<=(i-1+slen); k++)
						t += board[k][j];
				}

				if(t == s)
					return make_pair(i+1,j+1);

				t = "";
				// get left horizontal
				if(j+1-slen >= 0) {
					for(int k=j; k>=(j+1-slen); k--) {
						t += board[i][k];
					}
				}
				
				if(t == s)
					return make_pair(i+1,j+1);

				t = "";
				// get right horizontal
				if(j-1+slen < n) {
					for(int k=j; k<=(j-1+slen); k++) {
						t += board[i][k];
					}
				}

				if(t == s)
					return make_pair(i+1,j+1);

				t = "";
				// get upper left diagonal
				if((i+1-slen) >= 0 && (j+1-slen) >= 0) {
					for(int h=i, k=j; h>=(i+1-slen); h--, k--)
						t += board[h][k];
				}

				if(t == s)
					return make_pair(i+1,j+1);

				t = "";
				// get upper right diagonal
				if((i+1-slen) >= 0 && (j-1+slen) < n) {
					for(int h=i, k=j; h>=(i+1-slen); h--, k++)
						t += board[h][k];
				}

				if(t == s)
					return make_pair(i+1,j+1);

				t = "";
				// get lower left diagonal
				if((i-1+slen) < m && (j+1-slen) >= 0) {
					for(int h=i, k=j; h<=(i-1+slen); h++, k--)
						t += board[h][k];
				}

				if(t == s)
					return make_pair(i+1,j+1);

				t = "";
				// get lower right diagonal
				if((i-1+slen) < m && (j-1+slen) < n) {
					for(int h=i, k=j; h<=(i-1+slen); h++, k++)
						t += board[h][k];
				}

				if(t == s)
					return make_pair(i+1,j+1);

				//cout << i-1+slen << " " << j-1+slen << " " << t << endl;
			}
		}
	}

	return make_pair(-1,-1);
}

int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int m,n, cases;
		string s; 

		scanf("%d %d",&m,&n);
		for(int i=0; i<m; i++) {
				scanf("%s",board[i]);

				for(int j=0; j<n; j++)
					board[i][j] = tolower(board[i][j]);
		}

		scanf("%d",&cases);
		while(cases--) {
			cin >> s;
			
			// set all letters to lowercase
			for(int i=0; i<s.length(); i++)
				s[i] = tolower(s[i]);

			pair<int, int> pos = solve(s,m,n);
			printf("%d %d\n", pos.first, pos.second);

		}
			if(T) 
				printf("\n");
	}
}









