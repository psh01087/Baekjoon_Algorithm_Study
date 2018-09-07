#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bool end = false;
		string input;
		cin >> input;
		count++;
		
		for (int j = 0; j < input.length(); j++) {
			for (int k = 0; k < j; k++)
				if (input[j] == input[k] && input[j] != input[j - 1]) {
					count--;
					end = true;
					break;
				}
			if (end)
				break;
		}
	}
	cout << count << '\n';
	return 0;
}