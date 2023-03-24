#include <stdio.h>

int main()
{
	char str[50] = "Multi Campus", tmp[50];
	char* from, * to;
	int cn = 0;
	
	from = str;
	to = tmp;

	while(from[cn])
	{
		to[cn] = from[cn];
		cn++;
	
	}
	to[cn] = '\0';
	printf("str : %s, tmp : %s \n", str, tmp);


}