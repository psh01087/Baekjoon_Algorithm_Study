#include <cstdio>
using namespace std;

int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	// 문자열 길이가 길어질 때는 에러이므로, string 또는 char로 받기
	for(int i=0; i<n; i++) {
		int temp;
		scanf("%1d", &temp);
		sum += temp;
	}
	printf("%d", sum);
	return 0;
}