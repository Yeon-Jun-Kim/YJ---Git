#include <stdio.h>
int sum_func(int count);
int main()
{
	printf("1���� 5������ ��%d \n", sum_func(1));
	


	}

int sum_func(int count)
{

	if (count <5) {

		return count + sum_func(count + 1);
	}
	else { return count; }
}