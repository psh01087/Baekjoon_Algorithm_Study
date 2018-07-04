#include <iostream>
using namespace std;

// 함수 사용
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
		// 규칙 잘 고민할 것
		if(temp<=10000)
			d_arr[temp - 1] = true;
		n++;
	}
	for (int i = 0; i < 10000; i++)
		// endl 사용시 속도 떨어짐
		if (!d_arr[i])
			cout << i+1 << '\n';
		
	return 0;
}