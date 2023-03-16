#include <stdio.h>
/*키보드로부터 성명, 월급, 회사 주소를 입력받아 출력하려고 한다.
이때 입력되는 건수는 알지 못하며, 성명이  "end"이면 입력 종료
월급 평균을 출력 후 프로그램이 종료*/
int main() {
	char name[20];
	int sal;
	char address[50];
	int sum = 0, cn = 0;
	while (1) {
		printf("이름(입력종료 : end)?");
		gets(name); // 주소를 말하는 것이 아니다. 여기서는
		if(strcmp(name,"end") == 0)
		{
			break;
		}
		printf("월급?");
		scanf("%d%*c", &sal);
		printf("주소?");
		scanf("%s",address);
		cn++;
		sum += sal;
	}
	printf("평균은 %f", (float)sum/cn);

	

	return 0;
}