#include <stdio.h>

int main()
{
	char line[80] = "UNIX LINUX WINDOWS APPLE";
	char* token;
	token = strtok(line, " \t");
	while(token)
	{
		printf("token : %s \n", token);
		token = strtok(NULL, " \t");
	}
	
}