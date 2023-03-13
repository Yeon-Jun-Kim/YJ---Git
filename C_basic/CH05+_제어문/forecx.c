#include <stdio.h>

int main() {
	int n;
	int c = 0;
	int i;
	printf("n을 입력하세요(1~100)");
	scanf("%d", &n);
	for (i = n; i < 100; i += n)
	{
		printf("%d\n",i);
		c++;
	}
	printf("%d의 배수의 갯수는 %d", n, c);



}