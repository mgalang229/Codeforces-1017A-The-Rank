#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int thomas = a + b + c + d;
	n--;
	vector<int> v;
	while(n--) {
		cin >> a >> b >> c >> d;
		int sum = a + b + c + d;
		v.push_back(sum);
	}
	int cnt = 1;
	for(int i = 0; i < (int) v.size(); ++i) {
		if(v[i] > thomas) {
			cnt++;
		}
	}
	cout << cnt << "\n";
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
