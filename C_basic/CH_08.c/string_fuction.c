#include <stdio.h>

int main() {
	int i,len;
	char s1[20] = "king", s2[20] = "";
	printf("s1: %s, s2: %s \n", s1, s2);
	printf("size : %d, len %d\n", sizeof(s1), strlen(s1));

	//s2 = s1;
	//printf("size : %d, len %d\n", sizeof(s1), strlen(s1)); ���� ���� �Ұ���.

	//len = strlen(s1);
	//for (i = 0; i < len; i++) { // �ݺ��Ҷ����� strlen�� ���ǹǷ� len���� ġȯ
	//
	//	s2[i] = s1[i];

	//}
	//for (i = 0; i < s1[i]; i++) { //null �� �Ǹ� ����.

	//	s2[i] = s1[i];
	//}
	strcpy(s2, s1); //���ڿ� ���� �Լ� > �������� �ϳ��ϳ� �ؾ���.

	
	do {
		printf("input s1?");
		gets(s1); // �տ��� ����� �о� ����
		

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
// Retrun 1 > ���� ũ�� 0 ���� -1 �ڰ�ũ��.