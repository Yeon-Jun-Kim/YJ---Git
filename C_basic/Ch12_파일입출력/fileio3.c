#include <stdio.h>
#include <stdlib.h>

int main()
{
	char tmp[100];
	FILE* fp;
	
	fp = fopen("c:\\windows\\system.ini", "rt");
	if (fp == NULL)
	{
		printf("c:\\windows\\systemp.ini open error");
		exit(1);
	}
	

	while (1)
	{
		if (fgets(tmp, 80, fp) == NULL) //   �ٴ����� ������ / 80����Ʈ / ������ ���� �������� �� �����.
			break;
		printf("%s", tmp);
	}

	fclose(fp);

	

}