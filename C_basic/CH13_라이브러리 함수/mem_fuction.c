#include <stdio.h>
#include <string.h>


int main()
{
	char str1[30] = "HELLO World";
	char str2[30] = "HELLO World";
	printf("before str1 : %s\n", str1);
	memcpy(str1 + 5, str1, 12);//(�����ּ�, �ٰ�, ũ��)
	printf("afger str1 : %s\n",str1);

	printf("before str2 : %s\n", str2);
	memmove(str2 + 5, str2, 12);//(�����ּ�, �ٰ�, ũ��)
	printf("afger str2 : %s\n", str2);
	
	int sal[100][200];
	//sal ���
	memset(sal, 0, sizeof(sal)); // Ư�� �޸𸮸� �ʱ�ȭ (NULL��ä���)


}