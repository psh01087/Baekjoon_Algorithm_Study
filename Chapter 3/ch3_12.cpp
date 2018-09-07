// 문제 15552번. 빠른 A+B
#include <iostream>
using namespace std;

int main() {
	int T, a, b;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}