// ���� 11718��. �״�� ����ϱ�
#include <iostream>
#include <string>
using namespace std;

// Tip. endl���ٴ� '\n'�� ����ϴ� �� �ӵ��� �ξ� ����.
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