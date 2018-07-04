#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> num(n);
	for (int i = 0; i<n; i++)
		cin >> num[i];



	for (int i = 0; i<n; i++)
		cout << num[i] << '\n';
	return 0;
}