#include <vector>
#include <iostream>
using namespace std;

int main() {
	int c, n, sum, cnt;
	float avg;
	cin >> c;
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < c; i++) {
		cin >> n;
		sum = 0;
		vector<int> score(n);
		for (int j = 0; j < n; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = (float) sum / n;
		cnt = 0;
		for (int j = 0; j < n; j++)
			if (score[j] > avg)
				cnt++;
		cout << (float)cnt / n * 100 << "\%\n";
	}
	return 0;
}