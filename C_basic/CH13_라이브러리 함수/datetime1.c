#include <stdio.h>
#include <time.h>


int main()
{
	time_t curr_t;
	struct tm* ptr;

	curr_t = time(NULL);// �ý����� �޷½ð��� ����, 1990�� 1�� 1�� 0�� 0�� 0�� ���� 1�� count
	printf("curr_t : %u\n", curr_t);

	printf("���糯¥�� �ð� : %s \n", ctime(&curr_t)); // ���ڿ��� ���ϱ�

	ptr = localtime(&curr_t);// �ý����� �޷½ð��� ����ü localtime ����ü �Լ�
							// tm�� ������� ������ �����ϰ�
							//�Ҵ�� ptr ����ü�� ��ȯ�Ѵ�.

	printf("Date ; %d��, %d��, %d��\n", ptr->tm_year + 1900, ptr->tm_mon + 1, ptr->tm_mday);
	printf("Time ; %d��, %d��, %d��\n", ptr->tm_hour, ptr->tm_min, ptr->tm_sec);

	ptr->tm_year = 2023;
	ptr->tm_mon = 4;
	ptr->tm_mday = 1;

	printf("date %d�� %�� %��\n", ptr->tm_year, ptr->tm_mon, ptr->tm_mday);


}