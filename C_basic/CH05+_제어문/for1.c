#include <stdio.h>
//  �ݺ�Ƚ���� �� �� �ַ� ���

int main() {
	int i;
	for (i = 1; i <= 100; i++)

		printf("%d\n", i);
	printf("i:%d\n", i);
	for (i = 0; i < 10; i++)

			printf("%d\n", i);
	printf("i:%d\n", i);
	for (i = 10; i > 0;i--)

		printf("%d\n", i);
	printf("i:%d\n", i);
	for (i = 1; i <= 10; i++); // ���⿡ ����Ŭ�� �ָ� �ݺ��� ���� ��ɾ ������ �ȵ� 

		printf("%d, ", i);
	printf("i:%d\n", i);
	i = 1;
	for (; i < 10; i++)

		printf("%d\n", i);
	printf("i:%d\n", i);
	i = 1;
	for (; i < 10;)

		printf("%d\n", i++);
	printf("i:%d\n", i);

	for (int j = 0; j < 10; j++)

		printf("%d\n", j);
	//printf("i:%d\n", j); ������ j�� �ݺ��� �������� ����ϰڴٴ� �Ҹ�

	

}