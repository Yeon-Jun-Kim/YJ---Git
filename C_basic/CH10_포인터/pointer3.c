#include <stdio.h>
// *������  *��ɾ�� ���� ���� �ٸ� * ��ɾ� �ּҿ� �ִ� ���� �����´�!

// �迭�� ������ �������� ���� ���ȣ�� num[2] = *(num +2)
int main()
{
	int num[5] = { 100,200,300,400,500 }, i;
	int* ptr;
	ptr = num;// num��ü�� �ּ��̹Ƿ�
	printf("%d, %d \n\n", sizeof(num), sizeof(ptr));
	for (i = 0; i < 5; i++)

	{
		printf("%p: %d, %d, %d, %d \n",
		&num[i], num[i], *(ptr + 1), *(num+i), ptr[i]); // num�� �������̱� ������ ���� ��� �켱���� ������ ��ȣ �ʿ�


	}
	printf("\n");

	char str[20] = "kingdom", * p2;
	p2 = str;
	printf("%c, %c, %c,%c \n", str[0], *(str + 0), *str, *p2); // ��� ���� ������
	printf("%p : %s, %s \n", str, str, p2); // ������ ������
	for(i=0; p2[i] ;i++ )
	{
		printf("%c", *(p2 + i));
	}
	// str�� p2�� ������ str�� ����̱� ������ �ּҸ� �ٲٴ� ���� �Ұ���
	while (*p2)
	{
		printf("%c", *str);
		p2++;
	}
}
