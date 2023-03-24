#include <stdio.h>


int main()
{	
	int count[3][4][5];
	int i, j, k, N = 1;
	for (i = 0; i < 3; i++)
	{
		printf("%d¸é\n", i);
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 5; k++)
			{
				count[i][j][k] = N++;
				printf("%d ", count[i][j][k]);

			}
			printf("\n");
		}
		printf("\n");
	}


}