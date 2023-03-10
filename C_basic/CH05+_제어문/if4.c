#include <stdio.h>
#include <ctype.h>
int main() {
	char w;
	int c;
	printf("문자를 입력해주세요 p or k\n");
	w = getchar();
	w= towlower(w);
	if (w == 'p') {
		printf("파운드를 입력해주세요");
		scanf("%d", &c);
		printf("%d파운드는 %0.2fkg 입니다.", c, 0.45358237 * c);
	}
	else if(w == 'k') {
		printf("kg을 입력해주세요");
		scanf("%d", &c);
		printf("%dkg는 %0.2f파운드 입니다.", c, c / 0.45358237);


	}

	else {
		printf("잘못된 입력입니다.");

	}

}