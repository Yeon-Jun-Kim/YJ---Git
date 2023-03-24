//입력된 날짜 요일 구하기
#include <stdio.h>

int dayStartFunc(int year,int mon, int day);

int main()
{
	int inputDate, year, month, day;
	int dayStart;//달의 날짜가 시작되는 요일

	char  days[7][10] = { "일","월","화","수","목","금","토" };


	printf("날짜(yyyymmdd) : ");

	scanf("%d", &inputDate); //20200609 입력

	year = inputDate / 10000;            //2020
	month = (inputDate % 10000) / 100;   //6
	day = (inputDate % 10000) % 100;     //9

	printf("year: %d, month:%d, day:%d \n", year, month, day);

	dayStart = dayStartFunc(year, month, day);//입력된 날짜의 일수 계산

	//기준일부터 입력일까지의 날짜수를 구한 후 7로 나눈 나머지가 0 이면 일요일이고, 0이 아니면 (기준일+1일) 의 요일
    // printf("dayStart: %d, dayStart%%7 : %d \n", dayStart, dayStart%7);

	printf("\n%d년 %d월 %d 일은, %s요일\n", year, month, day, days[dayStart % 7]);
}

//2020, 6, 9
int dayStartFunc(int year, int mon, int day)
{
	int yearMomth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }; //윤년아닐 때 월별 일자
	int i, t_day;//입력받은 날짜 계산

	t_day = (year - 1) * 365; //2019 년까지 일자

	for (i = 1; i < year; i++)  //1 ~ 2019 년도 가지 윤년 확인하여 1 씩 더하기
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
		{
			t_day++;//윤년은 366일이므로 하루더함
		}

	//t_day += (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400; //40~44 for문 한줄로 

	for (i = 1; i < mon; i++) //2020 입력받은 전 달까지의 날짜 더함
	{
		if (i == 2 && ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
			t_day += 29;
		else
			t_day += yearMomth[i];
	}

	return t_day + (day);  //년,전월까지의 합과 현재달 일자 더하여 반환
}
