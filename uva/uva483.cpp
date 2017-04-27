#include <iostream>
#include <stack>
using namespace std;


int main() {
	char t;
	stack <char> s;
	while(scanf("%c",&t)) {
		if(t == EOF) break;
		if(t != '\n' && t != ' ') {
			s.push(t);
		}
		else {
			while(!s.empty()) {
				printf("%c",s.top());
				s.pop();
			}

			if(t == ' ') printf(" ");
			else printf("\n");
		}
	}
}