#include <stdio.h>
//32bit
int main()
{
	signed char c1 = 'A';
	unsigned char c2 = 97;
	printf("%d:%c \n", c1, c2);
	printf("%d:%c \n", c2, c1);
	printf("%d:%d \n", sizeof(c1), sizeof(c2));


	short int x1;
	int x2;
	long int x3;
	long long int x4;
	

	float fnum = 123456789123456789;
	double dnum = 123456789123456789;

	printf("float%d,double%d\n", sizeof(fnum), sizeof(dnum));
	printf("int%d,long%d\n", sizeof(x2), sizeof(x3));
	printf("fnum : %f \n" ,fnum);
	printf("dnum : %f \n", dnum);
	printf("dnum : %f \n", dnum);
	//printf("%d, %d, %d,%d\n", sizeof(x1), sizeof(x2), sizeof(x3), sizeof(x4));





}

;