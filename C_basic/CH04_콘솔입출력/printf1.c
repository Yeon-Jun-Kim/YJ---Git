#include <stdio.h>

int main(void)
{
    printf("%d %c%c",555, 10,13);
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555);
    printf("/%-10d/ \n",555);
    printf("/%010d/ \n\n",555);
    printf("/%.10d/ \n\n", 555);

    printf("/%f/ \n",8192.1978);
    printf("/%13f/ \n",8192.1978);
    printf("/%13.2f/ \n",8192.1978);
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%5s\n", "C Language...");
    printf("%.5s \n\n", "C Language...");

    //10 ,8,16 ���� 0 > 8���� ���λ� 0x 16���� ���λ� , #�� ����ϸ� ���λ� ���� ǥ��
    printf("%d %#o %#x \n",67,67,67);
    printf("%d %#o %#x \n",067,067,067);//8���� 
    printf("%d %#o %#x \n",0x67,0x67,0x67); // 16����

	 return 0 ;
}

