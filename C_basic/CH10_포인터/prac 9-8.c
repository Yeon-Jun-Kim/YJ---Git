#include <stdio.h>
#include <string.h>
int main()
{

	char names[10][20] = { "kim", "lee","sin","jo","kim2",
	"chae", "jin", "bak", "so","chol"
	};
	int i, j;

	char tmp[20];
	printf("\n 배열 초기화\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (strcmp(names[j], names[j+1]) > 0)
			{
				strcpy(tmp, names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], tmp);

			}
		}


		for (j = 0; j < 10; j++)
		{
			printf("%5s", names[j]);


		}
		printf("\n");
	}

}