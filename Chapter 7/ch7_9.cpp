#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string input;
	string croatia[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	cin >> input;
	for(int i=0; i<8; i++){
		size_t start_pos = 0; //string처음부터 검사
		while ((start_pos = input.find(croatia[i], start_pos)) != string::npos)  //from을 찾을 수 없을 때까지
		{
			input.replace(start_pos, croatia[i].length(), "a");
			start_pos ++; // 중복검사를 피하고 from.length() > to.length()인 경우를 위해서
		}
	}
	count = input.length();
	cout << count << '\n';
	return 0;
}