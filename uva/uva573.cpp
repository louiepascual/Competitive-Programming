#include <iostream>
using namespace std;

int main() {
	float h,u,d,f;
	
	while(cin >> h >> u >> d >> f){ 
		if(h == 0 && u == 0
			&& d == 0 && f == 0) break;

		float tc = 0;
		int days = 0;
		float distMin = f/100.0 * u;
		for(;;) {	
			days++;
			tc += u;
			if(tc > h) break;
			tc -= d;
			if(tc < 0) break;
			u -= distMin;
			if(u < 0)
				u = 0;			
		}
		if(tc > h)
			cout << "success on day " << days << endl;
		else
			cout << "failure on day " << days << endl;
	}

}