#include <iostream>
using namespace std;

int cycle(int n) {
	if (n < 10)
		return n * 10 + n;
	else
		return (n % 10) * 10 + (n / 10 + n % 10) % 10;
}

int main() {
	int cycle_len = 0;
	int n, temp;
	cin >> n;
	temp = n;
	while (true) {
		temp = cycle(temp);
		cycle_len++;
		if (temp == n)
			break;
	}
	cout << cycle_len << endl;

	return 0;
}