#include <iostream>
#include <string>
using namespace std;

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