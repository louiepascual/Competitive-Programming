/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem D: p-Norms
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	ifstream fin("probd.in");

	int n;
	while(fin >> n) {
		double temp;
		double p1=0,p2=0,pinf=0;

		for(int i=0; i<n; i++) {
			fin >> temp;
			p1 += abs(temp);
			p2 += abs(pow(temp,2.0));
			if(abs(temp) > pinf)
				pinf = abs(temp);
		}

		cout << fixed << setprecision(6);
		cout << p1 << " ";
		cout << pow(p2,0.5) << " ";
		cout << pinf << endl;

		
	}
}