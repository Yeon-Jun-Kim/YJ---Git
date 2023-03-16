#include <stdio.h>

int main() {
	int i,len;
	char s1[20] = "king", s2[20] = "";
	printf("s1: %s, s2: %s \n", s1, s2);
	printf("size : %d, len %d\n", sizeof(s1), strlen(s1));

	//s2 = s1;
	//printf("size : %d, len %d\n", sizeof(s1), strlen(s1)); 직접 대입 불가능.

	//len = strlen(s1);
	//for (i = 0; i < len; i++) { // 반복할때마다 strlen이 계산되므로 len으로 치환
	//
	//	s2[i] = s1[i];

	//}
	//for (i = 0; i < s1[i]; i++) { //null 이 되면 끝남.

	//	s2[i] = s1[i];
	//}
	strcpy(s2, s1); //문자열 복사 함수 > 정수형은 하나하나 해야함.

	
	do {
		printf("input s1?");
		gets(s1); // 앞에꺼 지우고 밀어 넣음
		

	} while (strlen(s2)+ strlen(s1)  >= sizeof(s2));
	strcat(s2, s1); //king + dom}
	
	printf("s1 : %s,s2 : %s\n", s1,s2);
	printf("%d\n", strcmp(s1,s2));
	printf("%d\n", strcmp(s2, s1));
	printf("%d\n", strcmp(s2, "kingdom"));
	printf("%d\n", strcmp("a", "Abcdefg"));
	printf("%d\n", strcmp("apple","apple"));
	

}

//strcmp(s1,s2)
// Retrun 1 > 앞이 크다 0 같다 -1 뒤가크다.