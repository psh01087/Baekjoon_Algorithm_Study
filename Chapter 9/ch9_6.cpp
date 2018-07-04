#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {	
	int n;
	scanf("%d", &n);
	vector <string> words(n);
	for (int i = 0; i < n; i++)
		cin >> words[i];

	// words sort (bubble sort)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (words[i].length() < words[j].length())
				swap(words[i], words[j]);
			else if (words[i].length() == words[j].length()) {
				if (words[i].compare(words[j]) < 0)
					swap(words[i], words[j]);
				else if (words[i].compare(words[j]) == 0)
					words[j] = "";
			}
		}
	}

	for (int i = 0; i < n; i++)
		if (words[i] != "")
			cout << words[i] << '\n';

	return 0;
}