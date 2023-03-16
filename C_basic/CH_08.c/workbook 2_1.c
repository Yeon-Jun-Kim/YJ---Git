#include <stdio.h>

int main() {
	int x[] = { 10,20,30,40,50,60,70,80,90,100}, y[20], i, size;
	size = sizeof(x) / 4;
	for (i = 0; i < size; i++) {
		y[i] = x[size - i -1];

	}

	for (i = 0; i < size; i++) {

		printf("x:[%d]: %d, y[%d] : %d \n",i,x[i],i,y[i]);
	}







}