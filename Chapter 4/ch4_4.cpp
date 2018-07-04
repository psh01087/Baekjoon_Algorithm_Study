#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int max = 0;
	int sum = 0;
	cin >> n;
	// 벡터 사용법 : http://canna90.tistory.com/41
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		sum += num[i];
		if (num[i] > max)
			max = num[i];
	}
	float avg = (float)sum / (max*n) * 100;
	cout << fixed;
	cout.precision(2);
	cout << avg << endl;

	return 0;
}