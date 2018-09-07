#include <iostream>
using namespace std;

int main() {
	int x, i = 0;
	cin >> x;
	while (x > 0) {
		i++;
		x -= i;
	}
	x += i;
	if(i%2==0)
		cout << x << "/" << (i - x + 1) << '\n';
	else
		cout << (i - x + 1) << "/" << x << '\n';
	return 0;
}