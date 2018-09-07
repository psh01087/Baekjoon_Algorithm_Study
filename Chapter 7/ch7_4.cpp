#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string input;
	int alphabet[26] = { 0, };
	int max = 0;
	char result;
	
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(), ::toupper);
	for (int i = 0; i < input.length(); i++)
		alphabet[(int)input.at(i) - (int)'A']++;

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			result = (char)(i + 'A');
			max = alphabet[i];
		}
		else if (alphabet[i] == max)
			result = '?';
	}
	cout << result << '\n';
	return 0;
}