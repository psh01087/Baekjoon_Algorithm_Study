#include <iostream>
using namespace std;

// �Լ� ���
int d(int n) {
	int result = n;
	while (n != 0) {
		result += n % 10;
		n = n / 10;
	}
	return result;
}

int main() {
	int temp = 1;
	int n = 1;
	bool d_arr[10000] = { 0, };
	while (n < 10000) {
		temp = d(n);
		// ��Ģ �� ����� ��
		if(temp<=10000)
			d_arr[temp - 1] = true;
		n++;
	}
	for (int i = 0; i < 10000; i++)
		// endl ���� �ӵ� ������
		if (!d_arr[i])
			cout << i+1 << '\n';
		
	return 0;
}