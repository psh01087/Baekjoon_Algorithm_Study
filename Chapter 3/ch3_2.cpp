// 문제 2742번. 기찍 N
#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	// 예외 처리
	if (input > 100000)
		return -1;
	// printf와 cout 속도 차이
	for (int i = input; i > 0; i--)
		printf("%d\n", i);
	return 0;
}