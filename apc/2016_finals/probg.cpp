/*
ICST202 Algorithm Analysis and Design
Machine Problem 2
Author: Pascual, Louie Lester E.

Problem G: The Productive Juan Project - Phase 2
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
typedef pair<int,int> pii;

int main() {
	freopen("probg.in","r",stdin);
	
	bool unable = false;
	int start_time=-1, end_time=-1;
	string task;
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

		// get the task name, start and end time
		vector<pii> times;
		vector<string> tasks;
		times.clear();
		tasks.clear();
		for(int j=0; j<t; j++) {
			start_time=-1, end_time=-1;
			if(cin >> task >> start_time >> end_time) {}
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
				tasks.push_back(task);
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
			swap(tasks[min],tasks[j]);
		}

		for(int j=0; j<t; j++) {
		//	cout << tasks[j] << " " << times[j].first << " " << times[j].second << endl;
		}

		// count all tasks possible
		int count = 0;
		string buffer = "";
		
		for(int j=0; j<t; j++) {
			int min;
			min = j;
			for(int k=j+1; k<t; k++) {
				// if start time of next is greater than end of prev,
				// then increase count
				if(times[k].first >= times[j].second) {
					//count++;
					j = k-1;
					break;
				}
				else {
					// since this time overlaps with the pivot time
					// check if it is shorter than it
					int minTime = times[min].second - times[min].first;
					int currentTime = times[k].second - times[k].first;
					if(currentTime < minTime) {
						min = k;
					}

					if(k+1 >= t)
						goto l2;
				}
			}
			buffer += tasks[min];
			l2:
			count++;
		}
		
		cout << buffer << endl;

	}
}
