#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>
using namespace std;

int cities[101][5];
char trash[101][5];

int main() {
	freopen("in","r",stdin);
	string s;
	
	int ind = 0;
	memset(cities,0,sizeof(cities));
	memset(trash,0,sizeof(trash));

	while(getline(cin,s)) {
		if(s[0] == 'e') {
			for(int i=0; i<ind; i++) {
				for(int j=0; j<5; j++) {
					for(int k=0; k<5; k++) {
						if(trash[i][j] == trash[k][j]) {
							cities[i][j]++;
						}
					}
				}
			}

			int max = -999;
			int maxc = 0;
			for(int i=0; i<ind; i++) {
				int sum = 0;
				for(int j=0; j<5; j++) {
					sum += cities[i][j];
				}

				if(sum > max) {
					max = sum;
					maxc = i;
				}
			}

			cout << maxc+1 << endl;

			memset(cities,0,sizeof(cities));
			memset(trash,0,sizeof(trash));
			ind = 0;

		}
		else if(s[0] == '#') {
			break;
		}
		else {
			istringstream ss(s);
			char t, kind, tapon;
			ss >> t >> tapon >> kind;
			
			if(t == 'r') trash[ind][0] = kind;
			else if(t == 'o') trash[ind][1] = kind;
			else if(t == 'y') trash[ind][2] = kind;
			else if(t == 'g') trash[ind][3] = kind;
			else if(t == 'b') trash[ind][4] = kind;

			for(int i=1; i<5; i++) {
				ss >> tapon >> t >> tapon >> kind;
				if(t == 'r') trash[ind][0] = kind;
				else if(t == 'o') trash[ind][1] = kind;
				else if(t == 'y') trash[ind][2] = kind;
				else if(t == 'g') trash[ind][3] = kind;
				else if(t == 'b') trash[ind][4] = kind;
			}
			
			ind++;
		}
	}
}