#include <iostream>
using namespace std;

int main() {
	int input, i;
	cin >> input;
	// ���� ó��
	if (input > 100000)
		return -1;
	// printf�� cout �ӵ� ����
	for (i = 0; i < input; i++)
		printf("%d\n", i+1);
	return 0;
}