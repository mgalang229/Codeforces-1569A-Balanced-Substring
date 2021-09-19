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
		// check if there's a continuous substring of length 2 wherein it contains "ab" or "ba"
		int l = -1;
		int r = -1;
		for (int i = 0; i + 1 < n; i++) {
			if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a')) {
				l = i + 1;
				r = i + 2;
				break;
			}
		}
		cout << l << " " << r << '\n';
	}
	return 0;
}
