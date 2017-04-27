#include <iostream>
#include <vector>
using namespace std;

vector <int> pp;
typedef vector<int> vi;

int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{

		int t;
		cin >> t;
		pp.push_back(t);
	}
 	
 	vi::iterator it = pp.begin();
	
	while(it != pp.end()-1)
	{

		int tt = *it + *(it+1);
		if(tt % 2 == 0)
		{	
			pp.erase(it,it+2);

			if(pp.empty())
				break;
			it = pp.begin();
		}
		else	
			it++;	
	}

	cout << pp.size() << endl;
}