// UVa 621 - Secret Research
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;

		if(s == "1" || s == "4" || s == "78")
			cout << "+" << endl;
		else if(s.substr(s.length()-2,2) == "35")
			cout << "-" << endl;
		else if(s.substr(0,3) == "190")
			cout << "?" << endl;
		else
			cout << "*" << endl;
	}
}