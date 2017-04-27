/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem I: What's the Number?
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
	if(isalpha(c)) {
		if(c == 'a' ||
		c == 'e' ||
		c == 'i' ||
		c == 'o' ||
		c == 'u') {
			return true;		
		}
		else {
			return false;
		}
	}
	return false;
}

bool isConst(char c) {
	if(isVowel(c)) {
		return false;
	}
	return true;
}

bool isNum(string s) {
	for(int i=0; i<s.length(); i++) {
		if(!isdigit(s[i])) {
			return false;
		}
	}
	return true;
}

int main() {
	ifstream fin("probi.in");
	
	string s;
	int base = 0;
	bool hasBase = false;
	while(fin >> s) {
		int temp;
		if(!hasBase && isNum(s)) {
			hasBase = true;

			istringstream(s) >> temp;
			base = temp;
		}
		else {
			bool hasNum = false;
			int startInd = -1;
			int endInd = -1;
			for(int i=0; i<s.length(); i++) {
				if(!hasNum && isdigit(s[i])) {
					startInd = i;
					hasNum = true;
					continue;
				}

				if(hasNum && !isdigit(s[i])) {
					endInd = i-1;
					break;
				}
			}

			string buffer;
			char l,r;
			int num;
			if(startInd > 0 && endInd < s.length()-1) {
				buffer = s.substr(startInd,endInd+1-startInd);
				istringstream(buffer) >> num;
				l = s[startInd-1];
				r = s[endInd+1];

				if(isVowel(l) && isVowel(r)) {
					base -= num;
				}
				else if(isConst(l) && isConst(r)) {
					base *= 2;
				}
				else if(isVowel(l) && isConst(r)) {
					base += num;
				}
				else if(isConst(l) && isVowel(r)) {
					base += num;
				}
			}
		}
	}

	cout << base << endl;
}
