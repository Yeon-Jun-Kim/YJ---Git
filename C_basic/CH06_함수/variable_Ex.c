#include <stdio.h>


int main() {

	int kimSalary = 1000, leeSalary = 1500, hanSalary = 2000, parkSalary = 2500, ukSalary = 3000;
	salaryFunc(kimSalary);
	salaryFunc(leeSalary);
	salaryFunc(hanSalary);
	salaryFunc(parkSalary);
	salaryFunc(ukSalary);





}


int salaryFunc(int sal){
	static int count = 0, sum = 0;
	count += 1;
	sum += sal;
	printf("���� Count : %d, ���� : %d, ���� ��� : %f \n", count, sal, (float)sum / count);
}