#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

typedef vector <int> vi;
int main()
{
	int w,p;
	cin >> w >> p;

	vi l;
	l.push_back(0);

	int r;
	for(int i=0; i<p; i++)
	{
		cin >> r;
		l.push_back(r);
	}
	l.push_back(w);

	vector <int> t;
	for(int i=0; i<p+2; i++)
		for(int j=i+1; j<p+2; j++)
		{
			t.push_back(abs(l[j]-l[i]));
		}
	

	sort(t.begin(),t.end());

	for(int i=0; i<t.size(); i++)
	{
		if(t[i] != t[i-1])
			cout << t[i] << " ";
	}
		
	cout << endl;

}