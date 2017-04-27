// codechef - cleanup
// https://www.codechef.com/problems/CLEANUP

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n,m;
		cin >> n >> m;

		vector<int> j(n+1,0);
		for(int i=0; i<m; i++) {
			int id;
			cin >> id;
			j[id] = 1;
		}

		char t = 'c';
		vector<int> chef;
		vector<int> asst;
		for(int i=1; i<=n; i++) {
			if(j[i] != 1) {
				if(t == 'c') {
					chef.push_back(i);
					t = 'a';
				}
				else {
					asst.push_back(i);
					t = 'c';
				}
			}
		}

		for(int i=0; i<chef.size(); i++) {
			cout << chef[i] << " ";
		}
		cout << endl;

		for(int i=0; i<asst.size(); i++) {
			cout << asst[i] << " ";
		}
		cout << endl;
		
	}


}