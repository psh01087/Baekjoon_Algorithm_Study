#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> num(n);
	for (int i = 0; i<n; i++)
		cin >> num[i];

	// bubble sort
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (num[i] < num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for(int i=0; i<n; i++)
		cout << num[i] << '\n';
	return 0;
}