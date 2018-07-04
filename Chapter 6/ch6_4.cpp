#include <iostream>
#include <string>
using namespace std;

int main() {
	int input[8];
	string result;
	for (int i = 0; i < 8; i++)
		cin >> input[i];

	if (input[0] == 1) {
		for (int i = 1; i < 8; i++) {
			if (input[i] != i + 1) {
				result = "mixed";
				break;
			}
			else
				result = "ascending";
		}
	}
	else if (input[0] == 8) {
		for (int i = 1; i < 8; i++) {
			if (input[i] != 8 - i) {
				result = "mixed";
				break;
			}
			else
				result = "descending";
		}
	}
	else
		result = "mixed";

	cout << result << '\n';
	return 0;
}