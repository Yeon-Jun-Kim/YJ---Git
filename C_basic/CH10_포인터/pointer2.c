#include <stdio.h>


int main()
{
	char ch = 'A', * cp;
	int num = 100, * ip;
	float fnum= 1.1, * fp;
	double dnum = 5.2, * dp;

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);

	
	// 포인터변수에 주소를 할당

	cp = &ch; ip = &num; fp = &fnum; dp = &dnum;


	//printf("%c, %d, %f, %lf \n", *cp, *ip, *fp, *dp);
	//주소가 참조하는 데이터를 출력
	//printf("%p, %p, %p, %p \n", &cp, &ip, &fp, &dp);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);
	ch++, num++, fnum++, dnum++;
	cp++; ip++; fp++; dp++; // 포인터 연산 > 자료형의 크기만큼 증감
	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);


	//*ip = 37; // 주소를 가져와서 대입
	//printf("num :%d \n", num);
	


}