/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem J: Pyth's Magical Ladder
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
	ifstream fin("probj.in");

	double h,b;
	while(fin >> h >> b) {
		// checks constraints to determine what to output
		if(h <= 10 || b <= 0) {
			cout << 5 << endl;
		}
		else {
			// if it passes the constraints, it uses pythagorean theorem
			// to solve the problem
			cout << (int)sqrt(pow(h,2.0)+pow(b,2.0)) << endl;
		}
	}
}