#include <stdio.h>

int main()
{
	
	int salary[] = { 4500,7000,6000,7300,9000,5000 };
	float avg;

	int c = sizeof(salary) / 4;

	printf("∆Ú±’¿∫ %d",salCal(salary, c));
	
}

int salCal(int *salary,int c)
{
	int i ,sum = 0;
	

	for(i=0; i < c; i++)
	{
		printf("%d\n", salary[i]);
		sum += salary[i];
	}


	return sum / c;


}