#include <iostream>
using namespace std;

int main() {
	int n, count = 0, temp = 1;
	cin >> n;
	while (n > 0) {
		n -= temp;
		count++;
		temp = 6 * count;
	}
	cout << count << '\n';
	return 0;
}