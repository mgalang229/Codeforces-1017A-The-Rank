#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int sum = a + b + c + d;
	int ans = 1;
	for(int i = 2; i <= n; ++i) {
		cin >> a >> b >> c >> d;
		if(a + b + c + d > sum) {
			ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case(); 
	//}
	test_case();
	return 0;
}
