// UVa 594
// One Little, Two Little, Three Little Endians - BITSET Manip
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

long long conv(bitset <32> foo)
{
	long long sum = 0;
	if(foo.test(31) == true)
	{
		for(int i=0; i<31; i++)
			foo[i] = ~foo[i];
		for(int i=0; i<31; i++)
			if(foo.test(i) == true)
				sum += pow(2,i);
		sum += 1;
		sum *= -1;
	}
	else
	{
		for(int i=0; i<32; i++)
			if(foo.test(i) == true)
				sum += pow(2,i);
	}
	return sum;
}

int main()
{
	int n;
	while(cin >> n)
	{
		
		bitset <32> foo (n);
		cout << conv(foo) << " ";

		bool t;
		for(int i=0; i<8; i++)
		{
			int ind = i+24;
			t = foo[i];
			foo[i] = foo[ind];
			foo[ind] = t;
		}
		
		for(int i=8; i<16; i++)
		{
			int ind = i+8;
			t = foo[i];
			foo[i] = foo[ind];
			foo[ind] = t;
		}
		
		cout << "converts to " << conv(foo) << endl;
	}	
}
