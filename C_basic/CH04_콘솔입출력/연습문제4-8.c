#include <stdio.h>
#include <ctype.h>

int main() {
	char celsius;
	int out, tmp;
	printf("È­¾¾ÀÌ¸é f ¼·¾¾ÀÌ¸é c ÀÔ·Â");
	scanf("%c", &celsius);
	celsius = toupper(celsius);

	printf("%s ¿Âµµ?", celsius == 'F' ? "È­¾¾" : "¼·¾¾");
	scanf("%d", &tmp);

	printf("%d \n", tmp);

	out = celsius == 'F'? (tmp - 32) / 1.8 : (tmp * 1.8) +32;

	printf("%d \n",out);



}