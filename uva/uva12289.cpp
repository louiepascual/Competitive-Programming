// UVa 12289
// One-Two-Three - Ad Hoc
#include <iostream>	
using namespace std;

string nums[3] = {"one","two","three"};
char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
			'n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main() 
{
	int n;
	cin >> n;
	while(n--)
	{
		string s,t;
		cin >> s;

		bool found = false;
		for(int i=0; i<s.length(); i++)
		{
			for(int j=0; j<26; j++)
			{
				t = s.substr(0,i);
				t += a[j];
				t += s.substr(i+1,s.length()-i+1);
				for(int c=0; c<3; c++)
				{
					if(t == nums[c])
					{
						cout << c + 1 << endl;
						found = true;
						break;
					}
				}
				if(found) break;
			}
			if(found) break;
		}
	}
}