#include <stdio.h>

int main() {

	int num, i, prime;
	printf("Enter the number");
	scanf("%d", &num);
	prime = 1;
	for (i = 2; i <= (num / 2); i++)
	{

		if (num % i == 0) {
			
			prime = 0;
				break;
		}
		
	}
	if(prime==1){ printf("소수입니다"); }
	else
	{
		printf("소수가 아닙니다.");
	}
	

}