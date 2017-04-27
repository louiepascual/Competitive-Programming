#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <stdio.h>     
#include <stdlib.h> 

using namespace std;

int main()
{
	string in;
	while (cin>>in)
	{
		int a,b;
	int num=(in[0]-48)*1000+(in[1]-48)*100+(in[2]-48)*10+(in[3]-48);
	if (num<2400)
	{}
	else
	{
	cout<<"Malformed"<<endl;
	continue;
	}
	
	if (in[4]>='A'&&in[4]<='M')
	{
		a=in[4]-64;
		if (in[4]>'K')
		a--;
	}
	else if (in[4]>='N'&&in[4]<='Y')
	{
		a=(in[4]-77)*-1;
	}
	else if (in[4]=='Z')
	{
		a=0;
	}
	else
	{
		cout<<"Malformed"<<endl;
		continue;
	}
	
	
	if (in[5]>='A'&&in[5]<='M')
	{
		b=in[5]-64;
		if (in[5]>'K')
		b--;
	}
	else if (in[5]>='N'&&in[5]<='Y')
	{
		b=(in[5]-77)*-1;
	}
	else if (in[5]=='Z')
	{
		b=0;
	}
	else
	{
		cout<<"Malformed"<<endl;
		continue;
	}
	bool nextday=false;
	bool prevday=false;
	int dif=(b-a)*100;
	int t=num+dif;
	//cout<<"dif="<<dif<<" t="<<t<<" b="<<b<<" a="<<a<<endl;
	
	if (t>=2400)
	{
		t=t-2400;
		nextday=true;
	}
	if (t<0)
	{
		t=2400+t;
		prevday=true;
	}
	
	
	int h=t/100;
	int m=t%100;
	
	if (t==0)
	{
		cout<<"12:00AM";
		
	}
	else if (t<1200)
	{
		if(h==0)
		cout<<"12:";
		else 
		{
			if(h<10)
			cout<<"0";
			cout<<h<<":";
		}
		if(m<10)
		cout<<"0";
		cout<<m<<"AM";
	}
	else 
	{
		h=h-12;
		if(h==0)
		cout<<"12:";
		else 
		{
			if(h<10)
			cout<<"0";
			cout<<h<<":";
		}
		if(m<10)
		cout<<"0";
		cout<<m<<"PM";
	}
	
	if (nextday)
	cout<<" next day";
	else if (prevday)
	cout<<" previous day";
	else
	cout<<" current day";
	cout<<endl;
	
	}
	

}