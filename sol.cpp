#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int l = -1;
		int r = -1;
		auto Check = [](string str) {
			int countA = count(str.begin(), str.end(), 'a');
			int countB = count(str.begin(), str.end(), 'b');
			return countA == countB;
		};
		// check if there is a continuous substring that contains equal numbers of 'a' and 'b'
		// don't forget to save the indices plus one (1) and break both the inner/outer loop
		for (int i = 0; i < n; i++) {
			string temp = string(1, s[i]);
			bool checker = false;
			for (int j = i + 1; j < n; j++) {
				temp += string(1, s[j]);
				checker |= (Check(temp));
				if (checker) {
					l = i + 1;
					r = j + 1;
					break;
				}
			}
			if (checker) {
				break;
			}
		}
		cout << l << " " << r << '\n';
	}
	return 0;
}
