#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string input;
	cin >> input;
	vector <int> num(input.length());
	for (int i = 0; i < input.length(); i++) {
		num[i] = (int)input.at(i) - '0';
	}
	for (int i = 0; i < input.length(); i++)
		for (int j = 0; j < i; j++)
			if (num[i] > num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}

	for (int i = 0; i < input.length(); i++)
		cout << num[i];

	return 0;
}