#include <stdio.h>
int main()
{	
	char ch; //%c
	short int n1; //%hd
	int n2; // %d, %ld
	long long int n3; //%lld
	float fnum; //%f
	double dnum; //lf


	printf("input n1 ?");	//100
	scanf("%hd%*c", &n1);
	printf("input ch ?");	//A
	scanf(" %c", &ch);
	printf("input n2 ?"); //200
	scanf("%d", &n2);
	printf("input n3 ?"); //300
	scanf("%lld", &n3);
	printf("input fnum ?");// 1.1
	scanf("%f", &fnum);
	printf("input dnum ?"); // 5.2
	scanf("%lf", &dnum);
	
	printf("%c,%hd,%d,%lld,%f,%lf", ch, n1, n2, n3, fnum, dnum);
	return 0;

	// ���� �޾Ƶ��̴� %D �϶��� �ڷ��� ������ SCANF �� ���ۿ� �����ִ� �����̽��� ���� ���� �����ش�.

}