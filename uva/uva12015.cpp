// UVa 12015 - Google is Feeling Lucky
#include <iostream>
#include <vector>
using namespace std;

int main() {
	//freopen("out","w",stdout);
	//freopen("in","r",stdin);
	int t;
	scanf("%d",&t);

	char s[100];
	vector <string> l;
	for(int i=1; i<=t; i++) {
		l.clear();
		int f = 0, max = 0;
		for(int j=0; j<10; j++) {
			scanf("%s %d",s, &f);
			
			if(f > max) {
				l.clear();
				l.push_back(s);
				max = f;
			}
			else if(f == max) {
				l.push_back(s);
			}

		}

		printf("Case #%d:\n", i);
		for(int j=0; j<l.size(); j++)
			printf("%s\n",l[j].c_str());
		
	}

}