#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	// ���� ó��
	if (input > 100000)
		return -1;
	// printf�� cout �ӵ� ����
	for (int i = input; i > 0; i--)
		printf("%d\n", i);
	return 0;
}