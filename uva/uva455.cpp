// UVa - 455
// Periodic Strings
#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin.ignore();
		cin >> s;

		int len = 1;

		while(len <= s.length())
		{
			string sbstr = s.substr(0,len);
			bool flag = true;
			for(int j = len; j < s.length(); j+=len)
			{
				string sbstr2 = s.substr(j,len);
				if(sbstr2 != sbstr)
				{
					flag = false;
					break;
				}
			}

			if(flag)
			{
				cout << len << endl;
				break;
			}
			
			len++;
		}
		if(t != 0)
			cout << endl;
	}
}