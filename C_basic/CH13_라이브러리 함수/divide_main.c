#include <stdio.h>

#define SOURCE 1

#if SOURCE==1
	#include "ver1.c"
#elif SOURCE==2
	#include "ver2.c"
#else
	#include "ver3.c"
#endif

int main()
{
	int x,y;

	printf("input x ? ");
	scanf("%d",&x);
	printf("input y ?");
	scanf("%d",&y);

	div(x, y);

	return 0;
}
