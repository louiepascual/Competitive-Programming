#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main()
{
	ull x,y;

	while(cin >> x >> y)
	{
		ull t;
		if(x > y)
			t = x - y;
		else
			t = y - x;
		cout << t << endl;
	}
}