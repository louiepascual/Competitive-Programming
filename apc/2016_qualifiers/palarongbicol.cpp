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
   string name;
   string aa;
   int n;
   getline(cin,name);
   while(true)
   {
   	  
   		cin>>n;
   	//	cout<<n<<endl;
   		int teams[n];
   		for (int i=0;i<n;i++)
   		cin>>teams[i];
   		
   		cout<<"Matchups for "<<name<<endl;
   		for (int i=0;i<n;i++)
   		{
   			for (int j=i+1;j<n;j++)
   			{
   				if (teams[i]>teams[j])
   				  cout<<teams[j]<<" – "<<teams[i]<<endl;
  				   else
   				  cout<<teams[i]<<" – "<<teams[j]<<endl;
   			}
   		}
         cin.ignore();
         if(getline(cin,name))
            cout<<endl;
         else
            break;
   		
   		
   		
   }
}