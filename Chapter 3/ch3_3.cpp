// 巩力 2739锅. 备备窜
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	// 抗寇 贸府
	if (n > 9 || n < 1)
		return -1;

	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d\n", n, i, n*i);
	return 0;
}