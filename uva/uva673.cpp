#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string e;
		bool isBalanced = true;
		stack<char> s;

		getline(cin,e);

		for(int i=0; i<e.length(); i++) {
			if(e[i] == '(') {
				isBalanced = false;
				s.push(e[i]);
			}
			else if(e[i] == ')') {
				if(s.empty()) {
					isBalanced = false;
					break;
				}
				else if(s.top() == '(') {
					isBalanced = true;
					s.pop();
				}
				else {
					isBalanced = false;
					break;
				}
			}

			if(e[i] == '[') {
				isBalanced = false;
				s.push(e[i]);
			}
			else if(e[i] == ']') {
				if(s.empty()) {
					isBalanced = false;
					break;
				}
				else if(s.top() == '[') {
					isBalanced = true;
					s.pop();
				}
				else {
					isBalanced = false;
					break;
				}
			}

		}
		if(isBalanced && s.empty()) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}