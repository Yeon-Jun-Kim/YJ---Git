#include <stdio.h>
// while : �ݺ�Ƚ���� �� �� �ַ� ���

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
// �ϴ� �ϳ��� ���ٴ� ���� ������ while �ڿ� ; ������ �ʿ�

}