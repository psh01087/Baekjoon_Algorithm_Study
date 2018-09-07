// 문제 1924번. 2007년
#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y;
	int day = 0;
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string date[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	cin >> x >> y;

	for (int i = 0; i < x - 1; i++)
		day += month[i];
	day += y;
	cout << date[day % 7] << endl;
	return 0;
}