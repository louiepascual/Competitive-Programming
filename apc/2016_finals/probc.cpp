/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem C: A Tail of 0 and 1
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

string reverse(string s) {
	string temp = "";
	for(int i=s.length()-1; i>=0; i--) {
		temp += s[i];
	}
	return temp;
}

string dec_to_bin(int num) {
	string temp = "";
	char buffer[256];
	while(num != 0) {
		sprintf(buffer,"%d",num%2);
		temp += buffer;
		num /= 2;
	}
	return temp;
}

int bin_to_dec(string s) {
	int num = 0;
	for(int i=1; i<s.length(); i++) {
		if(s[i] == '1') {
			num += pow(2,i-1);
		}
	}
	return num;
}

int main() {
	ifstream fin("probc.in");
	
	int n;
	char t,c;
	fin >> n >> t >> c;
	for(int i=0; i<n; i++) {
		int num;
		fin >> num;
		string bin = dec_to_bin(num);
		bin = bin + t;

		int count = 0;
		int len = bin.length();
		for(int i=0; i<len; i++) {
			if(bin[i] == t)
				count++;
		}
		if(c == 'O') {
			if(count%2 == 0) {
				cout << "ERROR" << endl;
			}
			else {
				cout << (char)(bin_to_dec(bin)) << endl;
			}
		}
		else if(c == 'E') {
			if(count%2 == 0) {
				cout << (char)(bin_to_dec(bin)) << endl;
			}
			else {
				cout << "ERROR" << endl;
			}
		}

	}
}