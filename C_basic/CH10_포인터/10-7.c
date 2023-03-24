#include <stdio.h>
#include <string.h>


int main()
{
	int i;
	char str[50] = "multi Campus";
	char* ptr;
	ptr = str;
	for (i = 0; str[i]; i++)
	{	
		if (str[i] >= 97)
		{
			str[i] -= 32;
		}
		else if(64<str[i] && str[i] < 97)
		{
			str[i] += 32;

		}


	}
	printf("%s", str);


}