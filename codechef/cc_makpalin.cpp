#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <string>

using namespace std;

string reverse(string s)
{
	string x;
	for(int i=s.length()-1; i>=0; i--)
	{
		x += s[i];
	}
	return x;
}

bool isPalindrome(string s)
{
	
	int len = s.length();
	int halflen;
	string f,l;
	if(len % 2 == 0)
	{
		f = s.substr(0,len/2);
		l = s.substr(len/2,len-len/2);
	}
	else
	{
		f = s.substr(0,len/2);
		l = s.substr(len/2+1,len-(len/2+1));
	}

	//cout << f << " " << l << endl;	
	if(f == reverse(l))
		return true;
	else
		return false;
}

int main()
{
	int t;
	cin >> t;

	for(int i=0; i<t; i++)
	{
		string s;
		cin >> s;

		map <char,int> chars;
		vector <char> listOfChars;

		istringstream ss(s);
		char z;
		while(ss >> z)
		{
			if(chars[z] != 1)
			{
				listOfChars.push_back(z);
				chars[z] = 1;
			}
		}

		int count = 0;
		int len = s.length();
		for(int j=0; j<=len; j++)
		{
			for(int k=0; k<listOfChars.size(); k++)
			{
				string g;
				g = s.substr(0,j) + listOfChars[k] + s.substr(j,len-j);

				//cout << g << endl;
				if(isPalindrome(g))
				{
					count++;
					break;
				}
			}
			
		}
		cout << count << endl;



	}
}