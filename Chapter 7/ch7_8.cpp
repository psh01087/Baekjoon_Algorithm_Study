#include <iostream>
#include <string>
using namespace std;

int main() {
	int dial = 0;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		int letter = input.at(i) - 'A';
		if (letter < 15)
			dial += letter / 3 + 3;
		else if (letter < 19)
			dial += 8;
		else if (letter < 22)
			dial += 9;
		else
			dial += 10;
	}
	cout << dial << '\n';
	return 0;
}