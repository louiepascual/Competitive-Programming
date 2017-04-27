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
	freopen("test.in","r",stdin);

   string q;
   int max=0;
   string thenum;
   int cur;
   
   int mult=1;
   int start=0;
   
   while(cin>>q)
   {
   	mult=1;
   	start=0;
   	cur=0;
   	
   	if (q[0]=='-')
   	{
   		mult=-1;
   		start=1;
   	}
   	
	   for (int i=start;i<q.size();i++)
	   {
	   	if (q[i]!='.')
	   		cur=cur+q[i]-48;
	   }
	   if (cur>max)
	   	thenum=q;
   }
   cout<<thenum << endl;
  
   
   return 0;
}