// codechef - cielab
// https://www.codechef.com/problems/CIELAB

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;

	int n = a-b;
	int q = n%10;
	if(q == 9) q--;
	else q++;

	int t = ((n/10) * 10) + q;
	cout << t << endl;

}