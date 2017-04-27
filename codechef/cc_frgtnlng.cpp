// FRGTNLNG.cpp
// Forgotten Language - CodeChef
#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);

		map <string,bool> a;
		vector <string> nlist;
		for(int i=0; i<n; i++)
		{
			string s;
			cin >> s;
			a[s] = false;
			nlist.push_back(s);
		}

		int kk;
		while(k--)
		{
			string s;
			scanf("%d",&kk);
			while(kk--)
			{
				cin >> s;
				a[s] = true;
			}
		}

		for(int i=0; i<n; i++)
		{
			if(a[nlist[i]] == true)
				cout << "YES";
			else
				cout << "NO";

			if(i != n-1)
				cout << " ";
		}
		cout << endl;

	}
}