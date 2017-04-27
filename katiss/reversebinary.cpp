#include <iostream>
#include <cmath>
using namespace std;

string decToBin(int s)
{
	string t;
	while(s != 0)
	{
		if(s%2 == 0)
			t += "0";
		else
			t += "1";
		s /= 2;
	}
	return t;
}

int binToDec(string s)
{
	int val = 0;
	int mult = 0;
	for(int i=s.length()-1; i>=0; i--)
	{
		if(s[i] == '1')
			val += pow(2,mult);
		mult++;
	}
	return val;
}

int main()
{
	int n;
	cin >> n;

	cout << binToDec(decToBin(n)) << endl;

}