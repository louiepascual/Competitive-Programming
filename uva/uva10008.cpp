#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();

	char temp;
	map <char,int> x;
	while(n--) {
		string sen;
		getline(cin,sen);
		
		istringstream ss(sen);

		while(ss >> temp) {
			if(isalpha(temp)) {
				temp = toupper(temp);
				x[temp] += 1;
			}
		}
	}

	while(!x.empty()) {
		map<char,int>::iterator max = x.begin();
		for(map<char,int>::iterator rt = max; rt != x.end(); rt++) {
			if(rt->second > max->second) {
				max = rt;
			}
			if(rt->second == max->second) {
				if(rt->first < max->first) {
					max = rt;
				}
			}
		}
		cout << max->first << " " << max->second << endl;
		x.erase(max);
	}

}