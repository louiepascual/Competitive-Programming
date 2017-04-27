#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	freopen("test.in","r",stdin);

	string s;
	while(getline(cin,s)) {

		istringstream ss(s);

		vector<string> t;
		string temp;
		int maxSize = 0;
		while(ss >> temp) {
			t.push_back(temp);
			if(temp.length() > maxSize) {
				maxSize = temp.length();
			}

		}

		for(int i=0; i<maxSize; i++) {
			for(int j=0; j<t.size(); j++) {
				if(t[j].length() <= i)
					cout << "  ";
				else  
					cout << t[j][i] << " ";

			}
			cout << endl;
		}
		
		cout << endl;
	}
	

}