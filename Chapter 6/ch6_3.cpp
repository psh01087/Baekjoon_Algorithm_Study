#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string input;
		int count = 0;
		int score = 0;
		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			if (input.at(j) == 'O') {
				count++;
				score += count;
			}
			else if (input.at(j) == 'X')
				count = 0;
		}
		cout << score << '\n';
	}

	return 0;
}