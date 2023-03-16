#include <stdio.h>

int main()

{

	// scanf , gets 대신 scanf_s , gets_s 를 쓰라고 권장

	char name[20];
	char tel_no[28];

	printf("성명 ? ");
	scanf_s("%s%*c", name, 20); // 20 넘으면 버퍼에 남겨놓겠다는 뜻.
	printf("name : %s \n", name);
	
	printf("전화번호????\n");

	gets_s(tel_no, 20);// 실행중에 경고를 내보내겠다.
	printf("tel no : %s \n", tel_no);


}