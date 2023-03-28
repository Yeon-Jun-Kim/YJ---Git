#include <stdio.h>
#include <stdlib.h>

int main()
{

	char* ptr; // 스택에 할당

	while(1)
	{
		ptr = (char*)malloc(100);// cast 해줘야함.
		if (ptr == NULL)
		{
			perror("Error : ");
			exit(1);
		}


		printf("input string?");
		gets(ptr);
		if (!strcmp(ptr, "end"))
			break;

		printf("ptr : %p, %s \n", ptr, ptr); // 계속 다른 주소를 받음
		free(ptr); // 해제 된다. 두 번해제하면안된다.
	}
	free(ptr);
	ptr = NULL;

}
