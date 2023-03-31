#include <stdio.h>


int main()
{
	
	int count[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,0 };
	int i, j;

	int(*ptr)[4]; // 4¿­ 
	printf("%d, %d, %d\n", sizeof(count), sizeof(count[0]), sizeof(count[0][0]));
	printf("%d, %p, %p, %p, %p, %p\n\n", count[0][0], &count[0][0],
		count, count[0], count[1], count[2]);


	ptr = count;
	int* ctr = **ptr;

	while(ctr)
	{
		printf("%d", ctr);
		ctr++;
	}
	



}
