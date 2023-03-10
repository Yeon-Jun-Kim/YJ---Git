#include <stdio.h>
// while : 반복횟수를 모를 때 주로 사용

int main() {


	char ch;
	ch = 'A';
	while (ch <= 'Z') {

		printf("%c ", ch);
		ch++;

	}

ch = 1;
while (ch <= 10) {
			printf("%d", ch);
			ch += 1;
				

	}

while (ch <= 'Z') {

		printf("%c ", ch);
		ch++;

	}

ch = 'a';


do {
	printf("%c ", ch);
	ch++;
} while (ch <= 'Z');
// 일단 하나는 들어간다는 것이 차이점 while 뒤에 ; 무조건 필요

}