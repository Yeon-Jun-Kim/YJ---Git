#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1,num2;
	char op;

	while (1) {
		do {
			printf("���ϱ�(a), ����(s), ���ϰ�(m), ������(d), ���� (Q)\n");
			printf("������ ù ���ڸ� �Է��ϼ��� ? ");
			op = toupper(getchar());   // A[enter]
			getchar();
			

		} while (op != 'A' && op != 'S' && op && 'M' && op != 'D' && op != 'Q');
		if (op == 'Q') {

			break;

		}
		printf("\n");

		
		printf("ù ��° �� : ");
		scanf("%d%*c", &num1);  //100

		printf("�� ��° �� : ");
		scanf("%d%*c", &num2);    //30

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D')

			if (num2 != 0) {

				printf("%d / %d = %d \n", num1, num2, num1 / num2);
			}
			else {
				printf("0���� ���ü� ������");
			}

		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);
		else
			printf("���깮�� ����!! \n");

	
		printf("����ұ�� ? (y/n)");
		scanf("%c%*c", &op);
		if (op == 'Y' || op == 'y') {

			continue;
		}
		else
		{break;
		}
	}

	printf("End. \n");

	return 0 ;
}
