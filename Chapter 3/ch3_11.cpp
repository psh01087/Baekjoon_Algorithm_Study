#include <iostream>
#include <string>
using namespace std;

int main() {
	char input[100];
	// getline �Լ� ���� ���!
	cin.getline(input, 100);
	for (int i = 0; i < 100; i++) {
		if (input[i] != '\0')
			cout << input[i];
		else
			break;
		if (i % 10 == 9)
			cout << "\n";
	}
	return 0;
}