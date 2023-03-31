#include <stdio.h>


int main() {
	typedef struct EMP {
		int num;
		char ch[20];


	}emp;
	emp* p2;
	
	emp p1 = {20, "yeonjun"};
	p2 = &p1;
	printf("%s", (*p2).ch);
	


}