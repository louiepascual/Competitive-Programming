// UVa 256 - Quirksome Squares
// Complete Search - Iterative
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
	int t;
	while(cin >> t)
	{
		ll divisor,end;
		if(t == 2) 
		{
			divisor = 10;
			end = 99;
		}
		else if(t == 4)
		{
			divisor = 100;
			end = 9999;
		}
		else if(t == 6)
		{
			divisor = 1000;
			end = 999999;
		}
		else if(t == 8)
		{
			divisor = 10000;
			end = 99999999;
		}

		for(ll i=0; i<end; i++)
		{
			if(pow((i/divisor)+(i%divisor),2) == i)
				cout << setfill('0') << setw(t) << i << endl;
		}
	}
}