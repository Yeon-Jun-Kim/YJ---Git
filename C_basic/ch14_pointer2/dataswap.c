#include <stdio.h>


int main()
{
	short int x = 100, y = 200;
	int n1 = 500, n2 = 900;
	double d1 = 1.1, d2 = 5.9;
	char names[2][20] = { "kim?", "lee?" };

	swap(&x,&y,sizeof(x));
	swap(&n1, &n2, sizeof(int));

	printf("x : %d, y : %hd\n", x, y);
	printf("n1 ; %d, n2 : %d\n", n1, n2);
	printf("d1 : %lf, d2 : %lf \n", d1, d2);
	printf("%s, %s \n", names[0], names[1]);

}

swap(void *sour, void *targ,int size) // 주소로 접근하는 개념
{
	char tmp,i ;
	for (i = 0; i < size; i++) {
		tmp = *((char*)sour+i);
		*((char*)sour+i) = *((char*)targ+i);
		*((char*)targ + i) = tmp;
	}


}