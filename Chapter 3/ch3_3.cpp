#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	// ���� ó��
	if (n > 9 || n < 1)
		return -1;

	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d\n", n, i, n*i);
	return 0;
}