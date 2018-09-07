#include <iostream>
using namespace std;

int main() {
	int n, temp;
	int set[10] = { 0, };
	cin >> n;
	if (n == 0) {
		cout << 1 << '\n';
		return 0;
	}
	while (n > 0) {
		set[n % 10]++;
		n = n / 10;
	}
	temp = set[6] + set[9];
	if (temp % 2 == 0) {
		temp = temp / 2;
		set[6] = temp; set[9] = temp;
	}
	else {
		temp = temp / 2 + 1;
		set[6] = temp; set[9] = temp;
	}
	int max = set[0];
	for (int i = 1; i < 10; i++)
		if (set[i] > max)
			max = set[i];
	cout << max << '\n';

	return 0;
}