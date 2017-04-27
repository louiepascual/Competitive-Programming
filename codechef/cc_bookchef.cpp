// cc_bookchef
// 

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

struct frnd {
	int special;
	int pop;
	string post;
};

struct classcomp {
  bool operator() (const frnd& lhs, const frnd& rhs) const
  {
  	if(lhs.special != rhs.special) {
		return lhs.special > rhs.special;
	}
	return lhs.pop > rhs.pop;
  }
};

int main() {
	int n,m;
	scanf("%d %d",&n,&m);

	set<int> ss;
	ss.clear();
	int t;
	for(int i=0; i<n; i++) {
		scanf("%d",&t);
		ss.insert(t);
	}

	multiset<frnd,classcomp> bar;
	bar.clear();

	int x,y;
	string s;
	frnd temp;
	for(int i=0; i<m; i++) {
		cin >> x >> y >> s;
		
		if(ss.find(x) != ss.end())
			temp.special = 1;
		else
			temp.special = 0;

		temp.pop = y;
		temp.post = s;

		bar.insert(temp);
	}

	for(multiset<frnd,classcomp>::iterator it = bar.begin(); it!=bar.end(); it++) {
		cout << (*it).post << endl;
	}

}