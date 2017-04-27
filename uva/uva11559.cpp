#include <iostream>
#include <fstream>
using namespace std;

typedef long long ll;
int main()
{
	//ifstream cin("11559.in");
	ll n;
	while(cin >> n)
	{
		 // number of participants
		ll b; // budget
		ll h; // hotels to consider
		ll w; // number of weeks

		ll p;
		ll a;
		ll cost;
		ll minCost = 100000000;
		bool foundAHotel = false;
		cin >> b >> h >> w;

		for(int i=0; i<h; i++)
		{
			cin >> p;
			for(int j=0; j<w; j++)
			{
				
				cin >> a;
				if(a < n)
					continue;
				else
				{
					cost = p * n;
					if(cost <= b && cost < minCost)
					{
						minCost = cost;
						foundAHotel = true;
					}
						
				}
			}
		}

		if(foundAHotel)
			cout << minCost << endl;
		else
			cout << "stay home" << endl;
	}

}