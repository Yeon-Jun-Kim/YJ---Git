#include <stdio.h>


int main() {


	char ch, i, inputchar;

	printf("input char ? ");
	inputchar = getchar();
	

	for(i =1; i<=3;i++){
		ch = 'A';
	while (ch <= 'Z') {

		printf("%c ", ch);
		if (ch == inputchar)
			//break;
			goto move;
		ch++;

	}
	}
	printf("\n");


move:	printf("end\n");
	





}
