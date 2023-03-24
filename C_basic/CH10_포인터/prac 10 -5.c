#include <stdio.h>

int main() {
	char str[20], *st;
	int i, cn = 0;
	printf("Input string?");
	gets(str);
	st = str;
	for(i=0; st[i]; i++ )
	{
		cn++;
	}
	for (i = cn; i >= 0; i--)
	{
		printf("%c ", *(st+i));


	}



}