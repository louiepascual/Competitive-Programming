// cf721_b - passwords
// http://codeforces.com/contest/721/problem/B

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cmath>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
	int n,k;
	cin >> n >> k;

	int foo[105] = {0};

	string s;
	for(int i=0; i<n; i++) {
		cin >> s;
		foo[s.length()]++;
	}
	int bar = 0;
	cin >> s;
	bar = s.length(); 

	int a = 0;
	for(int i=0; i<bar; i++)
		a += foo[i];
	int b = foo[bar];
	int c = a + b - 1;

	cout << a + (floor((a/k) * 5)) + 1 << " ";
	cout << c + (floor((c/k) * 5)) + 1 << endl;
}