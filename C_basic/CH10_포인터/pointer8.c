#include <stdio.h>
#include <string.h>
// ������ ������ �ּҸ� ����(ù��°)
int main()
{
	char s1[20] = "kingdom", s2[20];
	printf("before s1 ; %s, s2 : %s \n", s1, s2);

	mystrcpy(s2,s1);

	printf("after s1 ; %s, s2 : %s \n", s1, s2);


}

mystrcpy(char *to, const char *from)
{
	while(*from)
	{
		*to = *from;
		to++, from++;
	}
	*to = '\0'; // �����Ⱚ ǥ�� ���� �ʱ� ���� null �� ����


}