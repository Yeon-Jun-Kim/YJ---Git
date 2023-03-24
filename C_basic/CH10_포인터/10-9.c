#include <stdio.h>

int main() {
	
	char source[20] = "dom";
	char destination[20] = "king";
	my_Strcat(source, destination);


}

my_Strcat(char *from, char *to)
{
	int i, cn =0;
	for (i = strlen(to) - 1; i < strlen(to) + strlen(from)+1; i++)
	{
		printf("%d", i);
		to[i] = from[cn];
		cn++;

	}
	printf("%s", to);
}