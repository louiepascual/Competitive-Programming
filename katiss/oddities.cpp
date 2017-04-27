#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int t;
		cin >> t;
		if(abs(t)%2 == 0)
			cout << t << " is even" << endl;
		else
			cout << t << " is odd" << endl;
	}
}