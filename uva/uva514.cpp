#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	//freopen("in","r",stdin);
	int t;

	while(cin >> t) {
		if(t == 0) break;
		
		int tmp;
		while(cin >> tmp) {
			if(tmp == 0) {
				cout << "\n";
				break;	
			}

			// get data
			vector<int> b(t);
			b[0] = tmp;
			for(int i=1; i<t; i++) {
				cin >> b[i];
			}

			stack<int> r;
			r.push(1);
			int aFront = 2;
			bool found = true;


			for(int i=0; i<b.size(); i++) {	
				while(r.top() != b[i]) {
					if(aFront <= t) {
						r.push(aFront++);	

					}
					else {
						found = false;
						break;
					}
				}

				if(found == false) {
					break;
				}
				else {
					r.pop();

					if(r.empty() && aFront > t) {
						found = true;
						break;
					}
					else if(r.empty()) {
						r.push(aFront++);
					}
				}

			}
			cout << (found == true ? "Yes" : "No") << endl;
		}
	}
}