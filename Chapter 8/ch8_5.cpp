#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t, h, w, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		if (n%h != 0)
			printf("%d\n", n % h * 100 + n / h + 1);
		else
			printf("%d\n", 100 * h + n / h);
	}
	return 0;
}