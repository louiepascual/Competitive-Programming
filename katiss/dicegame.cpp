#include <iostream>
using namespace std;

int main()
{
	int g=0,e=0,t=0;
	for(int i=0; i<8; i++)
	{
		scanf("%d",&t);
		if(i < 4)
			g += t;
		else
			e += t;
	}

	if(g > e)
		printf("Gunnar");
	else if(g == e)
		printf("Tie");
	else if(g < e)
		printf("Emma");
}