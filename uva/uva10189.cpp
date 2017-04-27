#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	//ifstream cin("10189.in");
	int r,c;
	int temp;
	int count = 1;
	cin >> r >> c;
	while(true)
	{
		char field[r][c];

		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				cin >> field[i][j];
			}
		}

		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				temp = 0;
				if(field[i][j] == '.')
				{
					for(int t=i-1; t<i+2; t++)
					{
						for(int y=j-1; y<j+2; y++)
						{
							if(t>=0 && y>=0 && t<r && y<c)
							{
								if(field[t][y] == '*')
									temp++;
							}
						}
					}
					
					field[i][j] = temp + '0';
				}
			}
		}
		cout << "Field #" << count << ":" << endl;
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				cout << field[i][j];
			}
			cout << endl;
		}
		cin >> r >> c;
		if(r == 0 || c == 0)
			break;
		else
			cout << endl;
		count++;
	}


}