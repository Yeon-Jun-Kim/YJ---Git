#include <stdio.h>
// ���� ���ڿ� �����ϱ� ���� ����
int main()
{
	int i;
	char* ptr[] = {"kingdomtest", "advanced c programming", "c++programming",
	"ont two three", "multi campus", "����� ������ ���絿 100 ����", NULL};
	printf("ptr sizeof : %d\n", sizeof(ptr));

	for (i = 0; ptr[i]; i++)
	{
		printf("���ڿ� : %s, �����ּ� : %u ��� �ּ� %u \n", *(ptr + i), *(ptr + i), ptr +i);


	}
	

} 