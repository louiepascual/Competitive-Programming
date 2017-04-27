#include <iostream>
#include <cmath>
using namespace std;
char board[8][8];
int main()
{
	
	pair <int,int> b[8];
	char t;
	int count = 0;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			cin >> t;
			if(t == '*')
			{
				b[count].first = i;
				b[count].second = j; 
				count++;
			}
				
		}
	}
	bool flag = true;
	for(int i=0; i<8; i++)
	{
		for(int j=i+1; j<8; j++)
		{
			if(b[i].first == b[j].first)
				flag = false;
			if(b[i].second == b[j].second)
				flag = false;

			if(abs(b[i].first-b[j].first) == abs(b[i].second-b[j].second))
				flag = false;
		}
	}

	if(flag)
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;

}