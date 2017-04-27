#include <iostream>
using namespace std;

char signs[4] = {'-','+','/','*'};

int main() 
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++)
	{
		int t;
		cin >> t;
		
	if(4+4+4+4 == t) cout << "4 + 4 + 4 + 4 = " << t << endl; 
else if(4+4+4-4 == t) cout << "4 + 4 + 4 - 4 = " << t << endl; 
else if(4+4+4*4 == t) cout << "4 + 4 + 4 * 4 = " << t << endl; 
else if(4+4+4/4 == t) cout << "4 + 4 + 4 / 4 = " << t << endl; 
else if(4+4-4+4 == t) cout << "4 + 4 - 4 + 4 = " << t << endl; 
else if(4+4-4-4 == t) cout << "4 + 4 - 4 - 4 = " << t << endl; 
else if(4+4-4*4 == t) cout << "4 + 4 - 4 * 4 = " << t << endl; 
else if(4+4-4/4 == t) cout << "4 + 4 - 4 / 4 = " << t << endl; 
else if(4+4*4+4 == t) cout << "4 + 4 * 4 + 4 = " << t << endl; 
else if(4+4*4-4 == t) cout << "4 + 4 * 4 - 4 = " << t << endl; 
else if(4+4*4*4 == t) cout << "4 + 4 * 4 * 4 = " << t << endl; 
else if(4+4*4/4 == t) cout << "4 + 4 * 4 / 4 = " << t << endl; 
else if(4+4/4+4 == t) cout << "4 + 4 / 4 + 4 = " << t << endl; 
else if(4+4/4-4 == t) cout << "4 + 4 / 4 - 4 = " << t << endl; 
else if(4+4/4*4 == t) cout << "4 + 4 / 4 * 4 = " << t << endl; 
else if(4+4/4/4 == t) cout << "4 + 4 / 4 / 4 = " << t << endl; 
else if(4-4+4+4 == t) cout << "4 - 4 + 4 + 4 = " << t << endl; 
else if(4-4+4-4 == t) cout << "4 - 4 + 4 - 4 = " << t << endl; 
else if(4-4+4*4 == t) cout << "4 - 4 + 4 * 4 = " << t << endl; 
else if(4-4+4/4 == t) cout << "4 - 4 + 4 / 4 = " << t << endl; 
else if(4-4-4+4 == t) cout << "4 - 4 - 4 + 4 = " << t << endl; 
else if(4-4-4-4 == t) cout << "4 - 4 - 4 - 4 = " << t << endl; 
else if(4-4-4*4 == t) cout << "4 - 4 - 4 * 4 = " << t << endl; 
else if(4-4-4/4 == t) cout << "4 - 4 - 4 / 4 = " << t << endl; 
else if(4-4*4+4 == t) cout << "4 - 4 * 4 + 4 = " << t << endl; 
else if(4-4*4-4 == t) cout << "4 - 4 * 4 - 4 = " << t << endl; 
else if(4-4*4*4 == t) cout << "4 - 4 * 4 * 4 = " << t << endl; 
else if(4-4*4/4 == t) cout << "4 - 4 * 4 / 4 = " << t << endl; 
else if(4-4/4+4 == t) cout << "4 - 4 / 4 + 4 = " << t << endl; 
else if(4-4/4-4 == t) cout << "4 - 4 / 4 - 4 = " << t << endl; 
else if(4-4/4*4 == t) cout << "4 - 4 / 4 * 4 = " << t << endl; 
else if(4-4/4/4 == t) cout << "4 - 4 / 4 / 4 = " << t << endl; 
else if(4*4+4+4 == t) cout << "4 * 4 + 4 + 4 = " << t << endl; 
else if(4*4+4-4 == t) cout << "4 * 4 + 4 - 4 = " << t << endl; 
else if(4*4+4*4 == t) cout << "4 * 4 + 4 * 4 = " << t << endl; 
else if(4*4+4/4 == t) cout << "4 * 4 + 4 / 4 = " << t << endl; 
else if(4*4-4+4 == t) cout << "4 * 4 - 4 + 4 = " << t << endl; 
else if(4*4-4-4 == t) cout << "4 * 4 - 4 - 4 = " << t << endl; 
else if(4*4-4*4 == t) cout << "4 * 4 - 4 * 4 = " << t << endl; 
else if(4*4-4/4 == t) cout << "4 * 4 - 4 / 4 = " << t << endl; 
else if(4*4*4+4 == t) cout << "4 * 4 * 4 + 4 = " << t << endl; 
else if(4*4*4-4 == t) cout << "4 * 4 * 4 - 4 = " << t << endl; 
else if(4*4*4*4 == t) cout << "4 * 4 * 4 * 4 = " << t << endl; 
else if(4*4*4/4 == t) cout << "4 * 4 * 4 / 4 = " << t << endl; 
else if(4*4/4+4 == t) cout << "4 * 4 / 4 + 4 = " << t << endl; 
else if(4*4/4-4 == t) cout << "4 * 4 / 4 - 4 = " << t << endl; 
else if(4*4/4*4 == t) cout << "4 * 4 / 4 * 4 = " << t << endl; 
else if(4*4/4/4 == t) cout << "4 * 4 / 4 / 4 = " << t << endl; 
else if(4/4+4+4 == t) cout << "4 / 4 + 4 + 4 = " << t << endl; 
else if(4/4+4-4 == t) cout << "4 / 4 + 4 - 4 = " << t << endl; 
else if(4/4+4*4 == t) cout << "4 / 4 + 4 * 4 = " << t << endl; 
else if(4/4+4/4 == t) cout << "4 / 4 + 4 / 4 = " << t << endl; 
else if(4/4-4+4 == t) cout << "4 / 4 - 4 + 4 = " << t << endl; 
else if(4/4-4-4 == t) cout << "4 / 4 - 4 - 4 = " << t << endl; 
else if(4/4-4*4 == t) cout << "4 / 4 - 4 * 4 = " << t << endl; 
else if(4/4-4/4 == t) cout << "4 / 4 - 4 / 4 = " << t << endl; 
else if(4/4*4+4 == t) cout << "4 / 4 * 4 + 4 = " << t << endl; 
else if(4/4*4-4 == t) cout << "4 / 4 * 4 - 4 = " << t << endl; 
else if(4/4*4*4 == t) cout << "4 / 4 * 4 * 4 = " << t << endl; 
else if(4/4*4/4 == t) cout << "4 / 4 * 4 / 4 = " << t << endl; 
else if(4/4/4+4 == t) cout << "4 / 4 / 4 + 4 = " << t << endl; 
else if(4/4/4-4 == t) cout << "4 / 4 / 4 - 4 = " << t << endl; 
else if(4/4/4*4 == t) cout << "4 / 4 / 4 * 4 = " << t << endl; 
else if(4/4/4/4 == t) cout << "4 / 4 / 4 / 4 = " << t << endl; 
else cout << "no solution" << endl;
	}
}