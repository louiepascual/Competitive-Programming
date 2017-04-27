#include <iostream>
#include <map>
using namespace std;

int main() {
	// BCG, BGC, CBG, CGB, GBC, GCB
	int arr[9];
	while(cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5]
			>> arr[6] >> arr[7] >> arr[8]) {
		map <string, int> x;
		//1 6 8 -- 0 5 7
		x["BCG"] = arr[1] + arr[2] + arr[3] + arr[4] + arr[6] + arr[8];
		//1 5 9 -- 0 4 8
		x["BGC"] = arr[1] + arr[2] + arr[3] + arr[5] + arr[6] + arr[7];
		//3 4 8 -- 2 3 7
		x["CBG"] = arr[0] + arr[1] + arr[4] + arr[5] + arr[6] + arr[8];
		//3 5 7 -- 2 4 6
		x["CGB"] = arr[0] + arr[1] + arr[3] + arr[5] + arr[7] + arr[8];
		//2 4 9 -- 1 3 8
		x["GBC"] = arr[0] + arr[2] + arr[4] + arr[5] + arr[6] + arr[7];
		//2 6 7 -- 1 5 6
		x["GCB"] = arr[0] + arr[2] + arr[3] + arr[4] + arr[7] + arr[8];

		string minstr = "BCG";
		int min = x["BCG"];

		for(map<string, int>::iterator it = x.begin(); it != x.end(); it++) {
			if(it->second < min) {
				minstr = it->first;
				min = it->second;
			}
		}

		cout << minstr << " " << min << endl;
	}
}