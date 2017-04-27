// uva146 - id codes
// https://uva.onlinejudge.org/external/1/146.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	char foo[256];
	char bar[] = "#";
	while(scanf("%s",foo)) {
		if(strcmp(foo,bar) == 0) break;

		int sz = strlen(foo);
		if(next_permutation(foo,foo+sz))
			printf("%s\n",foo);
		else 
			printf("No Successor\n");
	}
}