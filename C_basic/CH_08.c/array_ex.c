#include <stdio.h>


int main() {

	int num= 0 , alpha = 0, spe =0, i;
	int tmp;
	char msg[100];
	printf("문자열 입력?");
	gets(msg); // c program is fun!!!! book price : 25000[enter]
	printf("%s", msg);
	for (i = 0; msg[i] != 0; i++) {
		
		tmp = msg[i];
		
		if (65 <= tmp && tmp <= 90 || 97 <= tmp && tmp <= 122) {
			alpha++;
		}
		else if (48 <= tmp && tmp <= 57) {
			num++;
		}
		else {
			spe++;
		}
	}
	printf("숫자 : %d, 알파벳 : %d, 특수문자 : %d \n",num,alpha,spe);




}