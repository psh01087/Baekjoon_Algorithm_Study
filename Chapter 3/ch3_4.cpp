// 문제 2438번. 별 찍기 - 1
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 1 || n>100)
		return -1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}