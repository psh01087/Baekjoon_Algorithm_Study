#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string input;
	string croatia[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	cin >> input;
	for(int i=0; i<8; i++){
		size_t start_pos = 0; //stringó������ �˻�
		while ((start_pos = input.find(croatia[i], start_pos)) != string::npos)  //from�� ã�� �� ���� ������
		{
			input.replace(start_pos, croatia[i].length(), "a");
			start_pos ++; // �ߺ��˻縦 ���ϰ� from.length() > to.length()�� ��츦 ���ؼ�
		}
	}
	count = input.length();
	cout << count << '\n';
	return 0;
}