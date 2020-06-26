#include <bits/stdc++.h>

using namespace std;

void decode() {
	int a[50], n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = 1;
	for(int i = 0; i < n - 1; ++i) {
		if(a[i] != a[i+1]) cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
}
