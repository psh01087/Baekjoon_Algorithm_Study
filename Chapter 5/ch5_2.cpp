#include <iostream>
using namespace std;

bool is_seq(int n) {
	if (n < 100)
		return true;
	else if (n < 1000) {
		if ((n / 10) % 10 * 2 == ((n % 10) + (n / 100)))
			return true;
		else
			return false;
	}
	else if (n == 1000)
		return false;
}

int main() {
	int num;
	int count = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
		if (is_seq(i))
			count++;
	cout << count << endl;
	return 0;
}