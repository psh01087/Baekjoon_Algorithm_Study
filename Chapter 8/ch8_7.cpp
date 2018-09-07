#include <iostream>
using namespace std;

int cal_num(int k, int n) {
	int result = 0;
	if (k == 1)
		for (int i = 1; i <= n; i++)
			result += i;
	else
		for (int i = 1; i <= n; i++)
			result += cal_num(k - 1, i);
	return result;
}

int main() {
	int t, k, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << cal_num(k, n) << '\n';
	}
}