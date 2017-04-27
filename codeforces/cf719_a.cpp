// cf719_a - Vitya in the Countryside
// http://codeforces.com/contest/719/problem/A

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;


/*int a[30] = {
	0,1,2,3,4,
	5,6,7,8,9,
	10,11,12,13,14,
	15,14,13,12,11,
	10,9,8,7,6,
	5,4,3,2,1};*/
int a[100];
int main() {
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++)
		cin >> a[i];

	if(n == 1) {
		if(a[n-1] == 0) printf("UP\n");
		else if(a[n-1] == 15) printf("DOWN\n");
		else printf("-1\n");
	}
	else {
		if(a[n-2] == 14 && a[n-1] == 15) printf("DOWN\n");
		else if(a[n-2] == 1 && a[n-1] == 0) printf("UP\n");
		else if(a[n-2] < a[n-1]) printf("UP\n");
		else if(a[n-2] > a[n-1]) printf("DOWN\n");
	}	
}