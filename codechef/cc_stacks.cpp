// Stacks.cpp
// Stacks - CodeChef
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

typedef long long ll;

int main()
{
	int t;
	cin >> t;

	for(int i=0; i<t; i++)
	{
		int n;
		cin >> n;

		ll nlist[n];
		vector <ll> a;
		cin >> nlist[0];
		a.push_back(nlist[0]);

		for(int j=1; j<n; j++)
		{
			cin >> nlist[j];
			int low = 0;
			int high = a.size()-1;
			int ans = a.size();

			while(low <= high)
			{
				int mid = (low + high)/2;
				if(nlist[j] < a[mid])
				{
					ans = mid;
					high = mid-1;
				}
				else
				{
					low = mid + 1;
				}
			}

			if(ans == a.size())
				a.push_back(nlist[j]);
			else
				a[ans] = nlist[j];
		}

		cout << a.size() << " ";
		for(int j=0; j<a.size(); j++)
			cout << a[j] << " ";
		cout << endl;
	}
}