// uva127 - "accordian" patience
// https://uva.onlinejudge.org/external/1/127.pdf

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector< stack<string> > board;

void emptyDeck(int index) {
	while(!board[index].empty())
		board[index].pop();
}

bool match(string i, string j) {
	return (i[0] == j[0]) || (i[1] == j[1]);
}

void adjustBoard(int k) {
	for(int i=k; i<board.size()-1; i++) {
		board[i] = board[i+1];
	}

	emptyDeck(board.size()-1);
	board.pop_back();
}

void outputDecks() {
	vector< stack<string> > bb;
	bb = board;

	int maxsz = 0;
	for(int i=0; i<bb.size(); i++) {
		maxsz = max(maxsz,(int)bb[i].size());
	}

	for(int i=maxsz; i>=1; i--) {
		for(int j=0; j<bb.size(); j++) {
			if(bb[j].size() == i) {
				cout << bb[j].top() << " ";
				bb[j].pop();
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
	/*
	for(int i=0; i<bb.size(); i++) {
		while(!bb[i].empty()) {
			printf("%s ",(bb[i].top()).c_str());
		 		bb[i].pop();
		}
		printf("\n");
	}*/
}

void addNewCard(string t) {
	stack<string> temp;
	temp.push(t);
	board.push_back(temp);
}

int main() {
	string in;
	while(cin >> in) {
		if(in == "#") break;
		board.clear();

		// initialize board
		addNewCard(in);

		// run
		string val;
		int bsz, lastIndex;
		for(int i=1; i<52; i++) {
			cin >> in;

			addNewCard(in);
			lastIndex = board.size()-1;

			while(true) {
				// check 3rd deck from left
				if(lastIndex-3 >= 0) {
					val = board[lastIndex].top();

					if(match(val,board[lastIndex-3].top()) == true) { // check third
						board[lastIndex-3].push(val);
						board[lastIndex].pop();

						if(board[lastIndex].empty())
							adjustBoard(lastIndex);

						lastIndex = lastIndex-3;
						continue;
					}
				}

				// check immediate deck
				if(lastIndex-1 >= 0) {
					val = board[lastIndex].top();

					if(match(val,board[lastIndex-1].top()) == true) {
						board[lastIndex-1].push(val);
						board[lastIndex].pop();

						if(board[lastIndex].empty())
							adjustBoard(lastIndex);

						lastIndex = lastIndex-1;
						continue;
					}
				}
				
				if(lastIndex == board.size()-1)
					break;
				else
					lastIndex++;
			}

			/*cout << "AFTER CARD " << in <<  " " << lastIndex << ": \n";
			outputDecks();
			cout << endl;*/
		}
		
		if(board.size() == 1)
			printf("%d pile remaining:",(int)board.size());
		else
			printf("%d piles remaining:",(int)board.size());

		for(int i=0; i<board.size(); i++) {
			printf(" %d", (int)board[i].size());
		}
		printf("\n");



	}
}