#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	string result;
	// while������ ����ϴ� �ͺ��� �Ѳ����� ����ϴ°� �ӵ��� ������
	while (1) {
		getline(cin, input);
		result += input + "\n";
		if (input == "")
			break;
	}
	cout << result << endl;
	return 0;
}