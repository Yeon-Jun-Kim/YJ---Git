#include <stdio.h>
#include <stdlib.h>
#include <time.h>// ��¥, �ð� ��Ÿ���� ���� ���.
//rand() : ���� �߻���
int main() {
	int i;
	time_t curr_time; // 1900�� 1�� 1�� 0 �� 0�к���  count
	curr_time = time(NULL);
	printf(" %lld \n", curr_time);
	printf("%s \n", ctime(&curr_time));

	srand(curr_time); // ������ �ʱ�ȭ �Ź� �ٸ����ڰ��;��ϴµ� �׷��� ����ð��� ���� ����.


	for (i = 1; i <= 5; i++) {

		printf("%d\n", rand());

	}

	for (i = 1; i <= 5; i++) {

		printf("%d\n", rand()%100);

	}


}