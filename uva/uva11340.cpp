// UVa 11340
// Newspaper - 1D Static Array
#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
	int n,k,m;
	double t,sum;
	char c;
	string s;
	cin >> n;

	while(n--)
	{
		cin >> k;
		map <char,double> val;

		while(k--)
		{
			cin >> c >> t;
			val[c] = t/100;
		}

		cin >> m;
		cin.ignore();

		sum = 0;
		while(m--)
		{
			getline(cin,s);
			for(int i=0; i<s.length(); i++)
				sum += val[s[i]];
		}
		printf("%.2f$\n",sum);
	}
}