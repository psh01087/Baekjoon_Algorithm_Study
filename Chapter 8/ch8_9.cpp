#include <iostream>
using namespace std;

int main() {
	int t, m, n, x, y;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> x >> y;
		int year = 1;
		int arr[] = { m, n, 1, 1 };
		while (true) {
			if (x == arr[2] && y == arr[3])
				break;
			else if (arr[2] == arr[0] && arr[3] == arr[1]) {
				year = -1;
				break;
			}
			year++;
			if (arr[2] < arr[0])
				arr[2] = arr[2] + 1;
			else
				arr[2] = 1;
			if (arr[3] < arr[1])
				arr[3] = arr[3] + 1;
			else
				arr[3] = 1;
		}
		cout << year << '\n';
	}
	return 0;
}