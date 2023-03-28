#include <C:\Program Files (x86)\Visual Leak Detector\include\vld.h>
#include <stdio.h>
#include <stdlib.h>

int* funcA(int _numSz)
{
	int* nPtr, i;

	nPtr = (int*)malloc(_numSz * sizeof(int));

	if (nPtr == NULL)
	{
		perror("funcA() Error : ");
		exit(1);
	}

	for (i = 0; i < _numSz; i++)
		*(nPtr + i) = 100 + i;

	return nPtr;
}

void funcB(char* msg)
{
	printf("msg : %s \n", msg);
}

int main()  
{
	int numSz, * Ptr, i;

	printf("input Array Size ? ");
	scanf("%d", &numSz);

	Ptr = funcA(numSz);

	printf("\n동적할당 데이터\n");
	for (i = 0; i < numSz; i++)
		printf("%d, ", *(Ptr + i));
	printf("\n");

	funcB("다우기술");

	free(Ptr); // 메모리 누수 발생 x

	return 0;
}
