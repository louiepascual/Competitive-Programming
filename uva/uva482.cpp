// UVa482 - Permutation Arrays
#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
	freopen("in","r",stdin);
	int t;
	cin >> t;

	while(t--) {
		char buffer[256];
		scanf("\n");

		string s;
		getline(cin,s);
		istringstream ss(s);
		vector<int> ind;
		int tmp;
		while(ss >> tmp) ind.push_back(tmp);

		vector<string> arr(ind.size());
		for(int i=0; i<ind.size(); i++) {
			cin >> arr[ind[i]-1];
		}

		for(int i=0; i<arr.size(); i++) {
			cout << arr[i] << endl;
		}
		if(t != 0)
			cout << endl;
	}

}