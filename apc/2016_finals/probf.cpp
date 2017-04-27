/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem F: The Productive Juan Project - Phase 1
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
typedef pair<int,int> pii;

int main() {
	freopen("probf.in","r",stdin);
	
	bool unable = false;
	int start_time=-1, end_time=-1;
	// get no. of test cases
	int n;
	cin >> n;

	for(int i=0; i<n; i++) {
		int t;
		if(unable) {
			t = end_time;
		}
		else {
			// get no. of time to process
			cin >> t;
		}
		unable = false;

		// get the start and end time
		vector<pii> times;
		times.clear();
		for(int j=0; j<t; j++) {
			start_time=-1, end_time=-1;
			if(cin >> start_time >> end_time) {}
			else { goto l1;}

			if(start_time < 0 || start_time > 2400 ||
					end_time < 0 || end_time > 2400 ||
					(start_time > end_time)) {
				l1:
				cout << "unable to process" << endl;
				unable = true;
				break;
			}
			else {
				// store the start and end times
				//cout << start_time << " " << end_time << endl;
				times.push_back(make_pair(start_time,end_time));
			}
		}

		if(unable) { continue; }

		// sort using the end times
		for(int j=0; j<t; j++) {
			int min = j;
			for(int k=j+1; k<t; k++) {
				if(times[k].second < times[min].second) {
					min = k;
				}
			}
			swap(times[min],times[j]);
		}

		// count all tasks possible
		int count = 1;
		for(int j=0; j<t; j++) {
			for(int k=j+1; k<t; k++) {

				// if start time of next is greater than end of prev,
				// then increase count
				if(times[k].first >= times[j].second) {
					count++;
					j = k-1;
					break;
				}
			}
		}
		cout << count << endl;

	}
}
