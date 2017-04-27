// uva11995 - i can guess that data structure
// https://uva.onlinejudge.org/external/119/11995.pdf

#include <iostream>
#include <cstring>
#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int t;
	while(cin >> t) {
		bool isStack = true;
		bool isQueue = true;
		bool isPQueue = true;

		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;

		int foo,bar;
		while(t--) {
			cin >> foo >> bar;

			if(foo == 1) {
				s.push(bar);
				q.push(bar);
				pq.push(bar);
			}
			else if(foo == 2) {
				if(s.empty()) isStack = false;
				if(q.empty()) isQueue = false;
				if(pq.empty()) isPQueue = false;

				if(!s.empty()) {
					if(bar != s.top())
						isStack = false;
					s.pop();
				}

				if(!q.empty()) {
					if(bar != q.front())
						isQueue = false;
					q.pop();
				}
					
				if(!pq.empty()) {
					if(bar != pq.top())
						isPQueue = false;
					pq.pop();
				}
			}
		}
		
		if(!isStack && !isQueue && !isPQueue)
			printf("impossible\n");
		else if(isStack && isQueue && isPQueue)
			printf("not sure\n");
		else if(isStack && isQueue)
			printf("not sure\n");
		else if(isStack && isPQueue)
			printf("not sure\n");
		else if(isQueue && isPQueue)
			printf("not sure\n");
		else if(isStack)
			printf("stack\n");
		else if(isQueue)
			printf("queue\n");
		else if(isPQueue)
			printf("priority queue\n");
	}
}