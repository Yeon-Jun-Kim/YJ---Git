#include <stdio.h>
#include <stdlib.h>

int main()
{

	char* ptr; // ���ÿ� �Ҵ�

	while(1)
	{
		ptr = (char*)malloc(100);// cast �������.
		if (ptr == NULL)
		{
			perror("Error : ");
			exit(1);
		}


		printf("input string?");
		gets(ptr);
		if (!strcmp(ptr, "end"))
			break;

		printf("ptr : %p, %s \n", ptr, ptr); // ��� �ٸ� �ּҸ� ����
		free(ptr); // ���� �ȴ�. �� �������ϸ�ȵȴ�.
	}
	free(ptr);
	ptr = NULL;

}
