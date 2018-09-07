#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int r;
		string input;
		cin >> r >> input;
		for (int j = 0; j < input.length(); j++)
			for (int k = 0; k < r; k++)
				cout << input.at(j);
		cout << '\n';
	}

	return 0;
}
