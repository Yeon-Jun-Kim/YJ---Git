#include <stdio.h>


int main()
{
	int count[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i, j;

	int (*ptr)[4]; // 4열 
	//printf("%d, %d, %d\n", sizeof(count), sizeof(count[0]), sizeof(count[0][0]));
	//printf("%d, %p, %p, %p, %p, %p\n\n", count[0][0], &count[0][0],
	//	count, count[0], count[1], count[2]);




	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%p : %d ",&count[i][j],count[i][j]);
	//}
	//	printf("\n");
	//}for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%p : %d ", *(count+i)+j, *(*(count+i)+j));
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	ptr = count;
	printf("%u", *(*(ptr+1)+2));

	//
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%p : %3d ", *(ptr) + j, *(*(ptr) + j));

	//	}
	//	ptr++; // 다음행으로.
	//	printf("\n");
	//}
	// * => 여기에 접근해라 라는 뜻.
}

