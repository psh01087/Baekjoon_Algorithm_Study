#include <iostream>
using namespace std;

int main() {
	int input, i;
	cin >> input;
	// 예외 처리
	if (input > 100000)
		return -1;
	// printf와 cout 속도 차이
	for (i = 0; i < input; i++)
		printf("%d\n", i+1);
	return 0;
}