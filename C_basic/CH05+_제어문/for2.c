#include <stdio.h>
// ¦�������ؼ� ���ʴ��ϰ� Ȧ�� �����ؼ� ���ʿ� ���ϴ� ���
int main() {
	int n , i;
	int sum_1 = 0;
	int sum_2 = 0;
	printf("���ڸ� �Է��Ͻÿ�");
	scanf("%d", &n);
	for (i = 0; i <= n; i += 2) {
		sum_1 += i;
	}
	for (i = 1; i <= n; i += 2) {
		sum_2 += i;
	}
	printf("Ȧ���� : %d ¦���� : %d", sum_2, sum_1);


}

