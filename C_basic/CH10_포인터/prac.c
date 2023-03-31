#include <stdio.h>
int main() {
	char str[20], *st;
	int i = 0;
	printf("input string");
	gets(str);
	st = str;
	for (i = strlen(str)-1; i >= 0; i--)
	{
		printf("%c ", str[i]);


	}



}