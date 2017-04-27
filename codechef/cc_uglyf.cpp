// cc_uglyf
// https://www.codechef.com/problems/UGLYF

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

pair<int, int> dist[2][26];
char s[100005];

int ugliness(int s1_l, int s1_r, int s2_l, int s2_r) {
	return (abs(s1_l - s2_r) + abs(s2_r - s1_r) + abs(s1_r - s2_l) + abs(s2_l - s1_l));
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int sz, ch, ldist, rdist;
		for(int i=0; i<2; i++) {
			// set to infinite distances
			for(int j=0; j<26; j++) {
				dist[i][j] = make_pair(-999999,999999);
			}

			scanf("%s",s);
			sz = strlen(s);

			for(int j=0; j<sz; j++) {
				ch = s[j] - 'A';
				ldist = j;
				rdist = sz - j - 1;
				pair<int, int> foo = make_pair(min(ldist,rdist),max(ldist,rdist)); 
				if(foo.second - foo.first < dist[i][ch].second - dist[i][ch].first)
					dist[i][ch] = foo;
			}
		}

		int ans = 1000000;

		for(int i=0; i<26; i++) {
			ans = min(ans, ugliness(dist[0][i].first, dist[0][i].second, 
				dist[1][i].first, dist[1][i].second));
		}

		printf("%d\n",ans);

	}
}