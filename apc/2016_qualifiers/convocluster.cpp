#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <string>
using namespace std;


bool isvowel(char t) {

	

	t = tolower(t);
	if(t == 'a' ||
		t == 'e' ||
		t == 'i' ||
		t == 'o' ||
		t == 'u') {
		return true;
	}
	return false;
}

bool iscons(char t)
{
	if(isvowel(t))
		return false;
	return true;
}
int main() {
	freopen("test.in","r",stdin);

	string s;
	getline(cin,s);
	while(true) {
		bool isconvo = false;
		string temp = "";

		for(int i=0; i<s.length(); i++) {

			if(!isalpha(s[i])) {
				temp += "o";
			}
			else if(isvowel(s[i])) {
				temp += "v";
			}
			else if(iscons(s[i])) {
				temp += "c";
			}

		}
		// << temp << endl;
		size_t found = temp.find("ccvv");
		if(found != string::npos) {
			cout << "YES";
			goto l1;
		}

		found = temp.find("vvcc");
		if(found != string::npos) {
			cout << "YES";
			goto l1;
		}

		found = temp.find("ccvvc");
		if(found != string::npos) {
			cout << "YES";
			goto l1;
		}

		found = temp.find("cvvcc");
		if(found != string::npos) {
			cout << "YES";
			goto l1;
		}

		found = temp.find("cccvv");
		if(found != string::npos) {
			cout << "YES";
			goto l1;
		}		

		found = temp.find("cccvvc");
		if(found != string::npos) {
			cout << "YES";
			goto l1;
		}

		found = temp.find("cvvcvv");
		if(found != string::npos) {
			cout << "YES";
			goto l1;
		}


		
		cout << "NO";
	
		l1:		
		if(getline(cin,s))
			cout << endl;
		else
			break;


	}
	

}