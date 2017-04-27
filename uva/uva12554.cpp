#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

string lyrics[16] = {
	"Happy","birthday","to","you",
	"Happy","birthday","to","you",
	"Happy","birthday","to","Rujia",
	"Happy","birthday","to","you"
};

int main() {
	//freopen("in","r",stdin);
	int t;
	scanf("%d",&t);

	vector<string> names(t);
	for(int i=0; i<t; i++) cin >> names[i];

	int j = 0;
	int k = 0;
	int l = 0;
	int len = names.size();
	bool doneSinging = false;
	while(!(j == 0 && k >= len)) {
		cout << names[l] << ": " << lyrics[j] << endl;
		j++;
		j %= 16;

		k++;
		l = k%len;
	}
}