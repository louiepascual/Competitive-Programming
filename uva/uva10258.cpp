// uva10258 - contest scoreboard
// https://uva.onlinejudge.org/external/102/10258.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

struct team {
	int teamNo;
	int p_solved;
	int total_time;

	int pt[10];
};

bool myfunction (team& lhs, team& rhs) {
	if(lhs.p_solved != rhs.p_solved) 
		return lhs.p_solved > rhs.p_solved;
	if(lhs.total_time != rhs.total_time)
		return lhs.total_time < rhs.total_time;
	return lhs.teamNo < rhs.teamNo;
}


int main() {
	int n;
	string s;

	scanf("%d\n\n",&n);
	
	while(n--) {
		map <int,team> foo;
		foo.clear();
		int c,p,t;
		char L;

		while(getline(cin,s)) {
			if(s.empty()) break;
			istringstream ss(s);
			ss >> c >> p >> t >> L;

			//cout << c << " " << p << " " << t << " " << L << endl;
			if(c == 0) continue;
			foo[c].teamNo = c;


			if(L == 'I') {
				foo[c].pt[p] -=1;	
			}
			else if(L == 'C') {
				if(foo[c].pt[p] > 0) 
					continue;

				int timeSolved = t + (20 * abs(foo[c].pt[p]));
				foo[c].pt[p] = timeSolved;
				foo[c].p_solved += 1;
				foo[c].total_time += timeSolved;
			}
		}

		vector<team> bar;
		bar.clear();
		for(map<int,team>::iterator it=foo.begin(); it!=foo.end(); it++) {
			bar.push_back(it->second);	
		}

		sort(bar.begin(),bar.end(),myfunction);

		for(int i=0; i<bar.size(); i++) {
			printf("%d %d %d\n",bar[i].teamNo, bar[i].p_solved,bar[i].total_time);
		}

		if(n != 0) printf("\n");
		
	}
}
