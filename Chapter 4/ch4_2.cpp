#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b && a >= c) {
		if (b >= c)
			cout << b << endl;
		else
			cout << c << endl;
	}
	else if (a < b && a < c) {
		if (b >= c)
			cout << c << endl;
		else
			cout << b << endl;
	}
	else if (a >= b && a < c)
		cout << a << endl;
	else if (a < b && a >= c)
		cout << a << endl;
	return 0;
}