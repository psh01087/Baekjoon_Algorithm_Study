// 문제 2839번. 설탕 배달
#include <iostream>
using namespace std;

int count_bag(int n) {
	if (n == 3 || n == 5) return 1;
	else if (n < 5) return -1;
	else {
		for (int i = n / 5; i >= 0; i--) {
			for (int j = 0; j <= n / 3; j++) {
				if (n == i * 5 + j * 3)
					return (i + j);
			}
		}
	}
}

int main() {
	int input, output;
	cin >> input;
	output = count_bag(input);
	cout << output << endl;
	return 0;
}