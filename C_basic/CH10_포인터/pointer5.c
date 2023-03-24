#include <stdio.h>

int main()
{
	int x = 100, y = 200;
	printf("before x:%d, y : %d \n", x, y);
	//swap(x, y); // call by value 값에 의한 호출
	swap2(&x, &y); // 주소를 보낸다.
	printf("after x : %d, y : %d \n", x, y);


}

swap2(int *x, int *y) // 포인트 변수 선언 주소에 의한 호출

{	
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;

}

swap(int x, int y) // 가인수의 변화는 부모의 실인수에 영향을 미칠 수 없다.

{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;

}