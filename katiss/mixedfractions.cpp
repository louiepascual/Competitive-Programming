#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
	ll a,b;
	while(cin >> a >> b)
	{
		if(a == 0 && b == 0)
			break;

		cout << a / b << " " << a % b << " / " << b << endl; 
	}
}