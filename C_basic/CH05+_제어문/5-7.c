#include <stdio.h>



int main() {
	char ch = 'A';
	int i;
	int j;
	
	for (i = 0; i < 26; i++ ) {
		printf("\n");
		ch = 'A';
		for (j = 0; j < i; j++)
		{
			printf("%c",ch);
			ch++;
			
		}
	
	}

}