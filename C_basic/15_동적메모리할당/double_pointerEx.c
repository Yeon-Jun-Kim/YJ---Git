#include <stdio.h>



int main()
{
	int num, * ip, ** mip;

	printf("%d, %d, %d \n", sizeof(num), sizeof(ip), sizeof(mip));
	ip = &num;
	mip = &ip;

	**mip = 350;

	printf("%d, %d, %d\n", num, *ip, **mip);

	char* ptr[] = { "kingdom test", "Advanced C programming",
		"C++ programming", "ont two three", "multicampus", "seoul", "busan", NULL };

	funcA(ptr);




}

// ptr�� ���ڿ��� ���

funcA(char** ptr) // �迭�� �������� ����. �����͸� ����
{
	int i, j, cn = 0;
	char* ctr;
	ctr = *ptr;

	while(*ptr)
	{
		cn = 0;
		ctr = *ptr;

		while (*ctr)
		{

			cn++;
			ctr++;
			
		}
		printf("%u, %u, %s, %d\n", ptr, *ptr, *ptr, cn);

		ptr++;



	}

}

