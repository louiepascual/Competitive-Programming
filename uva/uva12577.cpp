// UVa 12577 -  Hajj-e-Akbar
#include <iostream>
using namespace std;

int main() {
	string s;
	int c = 1;
	while(cin >> s) {
		if(s == "*")
			break;

		if(s == "Hajj")
			cout << "Case " << c << ": Hajj-e-Akbar" << endl;
		else if(s == "Umrah") 
			cout << "Case " << c << ": Hajj-e-Asghar" << endl;

		c++;
	}
}