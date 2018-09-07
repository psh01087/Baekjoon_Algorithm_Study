// 문제 11721번. 열 개씩 끊어 출력하기
#include <iostream>
#include <string>
using namespace std;

int main() {
	char input[100];
	// getline 함수 사용법 기억!
	cin.getline(input, 100);
	for (int i = 0; i < 100; i++) {
		if (input[i] != '\0')
			cout << input[i];
		else
			break;
		if (i % 10 == 9)
			cout << "\n";
	}
	return 0;
}