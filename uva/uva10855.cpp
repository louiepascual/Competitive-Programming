// uva10855 - rotated squares
// https://uva.onlinejudge.org/external/108/10855.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;

void inputMatrix(vvc &foo, int sz) {
	char t;
	for(int i=0; i<sz; i++) {
		for(int j=0; j<sz; j++) {
			cin >> t;
			foo[i].push_back(t);
		}
	}
}

void outputMatrix(vvc &foo) {
	int sz = foo.size();
	for(int i=0; i<sz; i++) {
		for(int j=0; j<sz; j++) {
			cout << foo[i][j];
		}
		cout << endl;
	}
}

// 90deg rotate matrix a -> matrix b
void rotate(vvc &b) {
	vvc a;
	a = b;
	int sz = b.size();
	for(int j=0; j<sz; j++)
		for(int i=sz-1, k=0; i>=0; i--,k++)
			b[j][k] = a[i][j];
}

// extract matrix of size bsz starting at points (i,j)
vvc getMatrix(vvc &a, int bsz, int i, int j) {
	int sz = a.size();
	vvc c(bsz);
	int row = 0;
	for(int h=i; h<(i+bsz); h++) {
		for(int k=j; k<(j+bsz); k++) {
			c[row].push_back(a[h][k]);
		}
		row++;
	}
	return c;
}

// generate all the matrix subset to be checked, stored in D
void genMatrices(vvvc &D, vvc &a, int bsz) {
	int sz = a.size();
	for(int i=0; i<=(sz-bsz); i++)
		for(int j=0; j<=(sz-bsz); j++) {
			D.push_back(getMatrix(a,bsz,i,j));
			//outputMatrix(D[D.size()-1]);
		}
}

// return true if matrices b and c are equivalent
bool match(vvc &b, vvc &c) {
	int sz = b.size();
	for(int i=0; i<sz; i++)
		for(int j=0; j<sz; j++)
			if(b[i][j] != c[i][j])
				return false;
	return true;
}


int main() {
	int N,n;
	while(cin >> N >> n) {
		if(N == 0 && n == 0) break;
		
		vvc a(N); 
		inputMatrix(a,N);

		vvc b(n);
		inputMatrix(b,n);
		
		vvvc D;
		D.clear();
		genMatrices(D,a,n);

		int r;
		for(int i=0; i<4; i++) {
			r = 0;

			// rotate on 90,180,270
			if(i > 0)
				rotate(b);

			// look for matches
			for(int j=0; j<D.size(); j++) {
				if(match(b,D[j]))
					r++;
			}
			cout << r;
			if(i != 3) cout << " ";
		}
		cout << endl;
	}
}