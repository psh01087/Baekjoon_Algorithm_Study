// 문제 11718번. 그대로 출력하기
#include <iostream>
#include <string>
using namespace std;

// Tip. endl보다는 '\n'을 사용하는 게 속도가 훨씬 빠름.
int main() {
	string input;
	string result;
	// while문마다 출력하는 것보다 한꺼번에 출력하는게 속도가 더빠름
	while (1) {
		getline(cin, input);
		result += input + "\n";
		if (input == "")
			break;
	}
	cout << result << endl;
	return 0;
}