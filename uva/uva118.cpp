//UVa 118 - Mutant Flatworld Explorers
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
	int x,y;
	cin >> x >> y;

	int ix,iy;
	char ip;

	bool sc[x+1][y+1];
	memset(sc,false,sizeof(sc));
	
	while(cin >> ix >> iy >> ip) {
		bool didFell = false;
		int deg;
		if(ip == 'E') deg = 0;
		if(ip == 'N') deg = 90;
		if(ip == 'W') deg = 180;
		if(ip == 'S') deg = 270;

		string m;
		cin >> m;

		istringstream ss(m);

		char move;
		while(ss >> move) {
			if(move == 'R') {
				if(deg - 90 == -90)
					deg = 270;
				else
					deg -= 90;
			}
			else if(move == 'L') {
				deg = abs((deg + 90) % 360);
			}
			else if(move == 'F') {
				if(deg == 0) {
					ix += 1;
				}
				else if(deg == 90) {
					iy += 1;
				}
				else if(deg == 180) {
					ix -= 1;
				}
				else if(deg == 270) {
					iy -= 1;
				}

				if(ix > x) {
					ix -= 1;
					if(sc[ix][iy] == true)
						continue;
					sc[ix][iy] = true;
					didFell = true;
					break;
				}
				else if(ix < 0) {
					ix += 1;
					if(sc[ix][iy] == true)
						continue;
					sc[ix][iy] = true;
					didFell = true;
					break;
				}
				else if(iy > y) {
					iy -= 1;
					if(sc[ix][iy] == true)
						continue;
					sc[ix][iy] = true;
					didFell = true;
					break;
				}
				else if(iy < 0) {
					iy += 1;
					if(sc[ix][iy] == true)
						continue;
					sc[ix][iy] = true;
					didFell = true;
					break;
				}
			}
		}

		cout << ix << " " << iy << " ";
		if(deg == 0) cout << "E";
		if(deg == 90) cout << "N";
		if(deg == 180) cout << "W";
		if(deg == 270) cout << "S";

		if(didFell)
			cout << " LOST";
		cout << endl; 


	}
}