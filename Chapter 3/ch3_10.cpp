// ���� 11720��. ������ ��
#include <cstdio>
using namespace std;

int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	// ���ڿ� ���̰� ����� ���� �����̹Ƿ�, string �Ǵ� char�� �ޱ�
	for(int i=0; i<n; i++) {
		int temp;
		scanf("%1d", &temp);
		sum += temp;
	}
	printf("%d", sum);
	return 0;
}