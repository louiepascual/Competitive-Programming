/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem A: The Mandala Effect
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Reverses the string input
string flip(string s) {
	string ret = "";
	for(int i=s.length()-1; i>=0; i--) {
		ret += s[i];
	}
	return ret;
}

int main() {
	ifstream fin("proba.in");

	int r,c;
	fin >> r >> c;

	vector<string> mand;
	string temp;
	for(int i=0; i<r; i++) {
		fin >> temp;

		// store the input
		mand.push_back(temp);

		// just output the input and it's reverse
		cout << temp << flip(temp) << endl;
	}

	// for the lower half
	for(int i=r-1; i>=0; i--) {
		// output the contents of array and its reverse
		cout << mand[i] << flip(mand[i]) << endl;
	}
	
	cout << endl;
}