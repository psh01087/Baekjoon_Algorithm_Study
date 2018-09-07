#include <iostream>
#include <cmath>
using namespace std;

long long move(long long distance) {
	long long n = (long long)sqrt(distance);
	if (distance == n * n)
		return 2 * n - 1;
	else if (distance > n * n && distance <= n * n + n)
		return 2 * n;
	else if (distance < (n + 1) * (n + 1) && distance > n * n + n)
		return 2 * n + 1;
}

int main() {
	long long t, x, y;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		cout << move(y - x) << '\n';
	}
	return 0;
}