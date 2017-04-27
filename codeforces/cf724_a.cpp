// cf724_a - Checking the Calendar
// http://codeforces.com/contest/724/problem/0

#include <iostream>
using namespace std;

bool checkDays(string s1, string s2) {
	if(s1 == s2) return true;

	if(s1 == "monday" && (s2 == "wednesday" || s2 == "thursday")) return true;
	if(s1 == "tuesday" && (s2 == "thursday" || s2 == "friday")) return true;
	if(s1 == "wednesday" && (s2 == "friday" || s2 == "saturday")) return true;
	if(s1 == "thursday" && (s2 == "saturday" || s2 == "sunday")) return true;
	if(s1 == "friday" && (s2 == "sunday" || s2 == "monday")) return true;
	if(s1 == "saturday" && (s2 == "monday" || s2 == "tuesday")) return true;
	if(s1 == "sunday" && (s2 == "tuesday" || s2 == "wednesday")) return true;
	return false;
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	if(checkDays(s1,s2) == true)
		cout << "YES\n";
	else
		cout << "NO\n";
}
