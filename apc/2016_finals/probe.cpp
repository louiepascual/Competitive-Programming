/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem E: Sum of Cubes
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
	ifstream fin("probe.in");
	int dp[1000000]; 
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 4;
	dp[5] = 5;
	dp[6] = 6;
	dp[7] = 7;
	
	int n;
	fin >> n;
	while(n--) {
		int t;
		fin >> t;

		for(int i=8; i<=t; i++) {
			dp[i] = i; // max

			for(int x=1; x<=i; x++) {
				int temp = x * x * x;
				if(temp > i)
					break;
				else
					dp[i] = min(dp[i],1+dp[i-temp]);
			}
		}
		cout << t << " " << dp[t] << endl;
	}

}