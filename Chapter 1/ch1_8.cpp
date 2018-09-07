// 문제 11719번. 그대로 출력하기2
#include <iostream>
#include <string>
using namespace std;

// Tip. string 입력은 getline(cin, string)으로 가능
int main() {
	string input, result;
	for(int i=0; i<100; i++) {		
		getline(cin, input);
		result += input + "\n";
	}
	cout << result << endl;
	return 0;
}