#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <stack>
#include <sstream>
using namespace std;

int main() {
	freopen("test.in","r",stdin);
	int n;
	
	while(cin >> n) {
		stack<long long> t;
		while(n--) {
			int val;
			cin >> val;
			t.push(val);
		}

		bool output = false;
		while(!t.empty()) {
			if(t.top() %2 == 0) {
				cout << t.top() << " ";
				output = true;
			}
			t.pop();
		}
		if(!output) {
			cout << "None to display";
		}
		cout << endl;

	}


	

}