#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

typedef vector<int> vi;

int main() {
	freopen("in","r",stdin);
	int t;
	scanf("%d",&t);

	while(t--) {
		int n;
		cin >> n;
		vi points(n);

		for(int i=0; i<n; i++) {
			int ncookies;
			cin >> ncookies;

			int c;
			map<int,int> freq;
			for(int j=0; j<ncookies; j++) {
				cin >> c;
				freq[c]++;
			}

			int count = 0;
			vector<int> ct;
			while(true) {
				ct.clear();
				for(int i=1; i<=6; i++) {
					if(freq[i] > 0) {
						ct.push_back(i);
					}
				}
				
				if(ct.size() == 4) count += 1;
				else if(ct.size() == 5) count += 2;
				else if(ct.size() == 6) count += 4;
				else break;


				for(int i=0; i<ct.size(); i++) {
					freq[ct[i]]--;
				}
			}

			points[i] = ncookies + count;
		}

		int maxval = *std::max_element(points.begin(), points.end());
		//cout << maxval << endl;
		vector<int> p;
		for(int i=0; i<points.size(); i++) {
			if(maxval == points[i]) {
				p.push_back(i+1);
			}
		}
		
		if(p.size() > 1) cout << "tie" << endl;
		else if(p[0] == 1) cout << "chef" << endl;
		else cout << p[0] << endl;
		
		
	}
}