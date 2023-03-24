//�Էµ� ��¥ ���� ���ϱ�
#include <stdio.h>

int dayStartFunc(int year,int mon, int day);

int main()
{
	int inputDate, year, month, day;
	int dayStart;//���� ��¥�� ���۵Ǵ� ����

	char  days[7][10] = { "��","��","ȭ","��","��","��","��" };


	printf("��¥(yyyymmdd) : ");

	scanf("%d", &inputDate); //20200609 �Է�

	year = inputDate / 10000;            //2020
	month = (inputDate % 10000) / 100;   //6
	day = (inputDate % 10000) % 100;     //9

	printf("year: %d, month:%d, day:%d \n", year, month, day);

	dayStart = dayStartFunc(year, month, day);//�Էµ� ��¥�� �ϼ� ���

	//�����Ϻ��� �Է��ϱ����� ��¥���� ���� �� 7�� ���� �������� 0 �̸� �Ͽ����̰�, 0�� �ƴϸ� (������+1��) �� ����
    // printf("dayStart: %d, dayStart%%7 : %d \n", dayStart, dayStart%7);

	printf("\n%d�� %d�� %d ����, %s����\n", year, month, day, days[dayStart % 7]);
}

//2020, 6, 9
int dayStartFunc(int year, int mon, int day)
{
	int yearMomth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }; //����ƴ� �� ���� ����
	int i, t_day;//�Է¹��� ��¥ ���

	t_day = (year - 1) * 365; //2019 ����� ����

	for (i = 1; i < year; i++)  //1 ~ 2019 �⵵ ���� ���� Ȯ���Ͽ� 1 �� ���ϱ�
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
		{
			t_day++;//������ 366���̹Ƿ� �Ϸ����
		}

	//t_day += (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400; //40~44 for�� ���ٷ� 

	for (i = 1; i < mon; i++) //2020 �Է¹��� �� �ޱ����� ��¥ ����
	{
		if (i == 2 && ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
			t_day += 29;
		else
			t_day += yearMomth[i];
	}

	return t_day + (day);  //��,���������� �հ� ����� ���� ���Ͽ� ��ȯ
}
