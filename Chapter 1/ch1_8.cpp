// ���� 11719��. �״�� ����ϱ�2
#include <iostream>
#include <string>
using namespace std;

// Tip. string �Է��� getline(cin, string)���� ����
int main() {
	string input, result;
	for(int i=0; i<100; i++) {		
		getline(cin, input);
		result += input + "\n";
	}
	cout << result << endl;
	return 0;
}