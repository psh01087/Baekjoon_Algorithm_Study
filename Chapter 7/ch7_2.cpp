#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int position[26];
	for (int i = 0; i < 26; i++)
		position[i] = -1;

	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		int temp = (int)input.at(i) - (int)'a';
		if (position[temp] == -1)
			position[temp] = i;
	}
	for (int i = 0; i < 26; i++)
		cout << position[i] << ' ';
	cout << '\n';

	return 0;
}