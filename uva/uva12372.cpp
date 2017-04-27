// UVa 12372
// Packing for Holiday - Ad Hoc
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++)
	{
		int l,w,h;
		cin >> l >> w >> h;

		string c = "good";
		if(l > 20 || w > 20 || h > 20)
			c = "bad";

		cout << "Case " << i+1 << ": " << c << endl;
	}
}