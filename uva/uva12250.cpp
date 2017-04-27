#include <iostream>
using namespace std;

int main() {
	string s;
	int count = 0;
	while(cin >> s) {
		if(s == "#") break;
		string lang;
		count++;

		if(s == "HELLO") lang = "ENGLISH";
		else if(s == "HOLA") lang = "SPANISH";
		else if(s == "HALLO") lang = "GERMAN";
		else if(s == "BONJOUR") lang = "FRENCH";
		else if(s == "CIAO") lang = "ITALIAN";
		else if(s == "ZDRAVSTVUJTE") lang = "RUSSIAN";
		else lang = "UNKNOWN";

		cout << "Case " << count << ": " << lang << endl;
	}
}