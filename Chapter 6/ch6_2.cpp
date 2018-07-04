#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	int a, b, c;
	int count[10] = { 0, };
	string result;
	cin >> a >> b >> c;
	result = to_string(a*b*c);
	
	for (int i = 0; i < result.length(); i++) {
		for (int j = 0; j < 10; j++)
			if (((int)result.at(i) - (int)'0') == j)
				count[j]++;
	}
	for (int i = 0; i < 10; i++)
		cout << count[i] << '\n';
	
	return 0;
}