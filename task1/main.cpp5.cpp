#include <iostream>
#include <string>
using namespace std;

int main() {
	int t; cin >> t;
	string s = "codeforces";

	while (t--) {
		char character; cin >> character;
		bool found = false;
		for (int i = 0; i < s.length(); i++) {
			if (character == s[i]) {
				found = true;
				break;
			}
		}
		if (found) {
			cout << "YES" << endl;
		}
		else { cout << "no" << endl; }
	}

}
