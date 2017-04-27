#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector <int> primes;
vector < pair<int,int> > gg;

void getPrimes() {
	primes.push_back(2);
	for(int i=3; i<32000; i++)
	{	
		if(i%2 == 0)
			continue;
		bool isPrime = true;
		for(int j=2; j<=sqrt(i); j++)
			if(i%j == 0)
			{
				isPrime = false;
				break;
			}
		if(isPrime)
			primes.push_back(i);
				
	}

}
int main()
{
	getPrimes();
	
	int n;
	cin >> n;
	while(n--)
	{
		gg.erase(gg.begin(),gg.end());
		int nreps = 0;
		int num;
		cin >> num;
		for(int i=0; i<primes.size(); i++)
			for(int j=i; j<primes.size(); j++)
			{
				if(primes[i] + primes[j] == num)
					gg.push_back(make_pair(primes[i],primes[j]));
			}

		printf("%d has %d representation(s)\n",num,gg.size());
		for(int i=0; i<gg.size(); i++)
			printf("%d+%d\n",gg[i].first,gg[i].second);
		cout << endl;
	}


}