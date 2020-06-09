#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a, b, c, ans = 0;

void decode() {
	cin >> a >> b >> c;
	ans = (a + b + c);
	cout << ans / 2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--) {
		decode();
	}
	return 0;
}
