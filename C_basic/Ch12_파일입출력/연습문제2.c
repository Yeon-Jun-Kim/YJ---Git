#include <stdio.h>
#include <string.h>
int main()
{
	char* token;	
	int i, cn =0;
	char tmp[4][80] = { 0 };
	FILE* fp;
	fp = fopen("emp_data.txt", "rt");


	while (1)
	{
		if (fgets(tmp[cn], 80, fp) == NULL)
			break;

		cn++;
	}




	

	for (i = 0; i < cn; i++)
	{
		token = strtok(tmp[i], " \t");
		while (token)
		{
			printf("%s, ", token);
			token = strtok(NULL, " \t");

		}


	}
	



}