#include <stdio.h>
#include <string.h>
char* GetSeason(int season);

typedef enum Season
{
    SPRING,
    SUMMER,
    FALL,
    WINTER,
} SEASON;

char* GetSeason(int season) // ���ڿ��� ������ �����ͷ� �ѱ�� �޾ƾ���.
{
    switch (season)
    {
    case 0: return "SPRING";
        break;
    case 1: return "SUMMER";
        break;
    case 2: return "FALL";
        break;
    case 3: return "WINTER";
        break;
    default:
        break;
    }
}
int main()
{
    char* ptr;
    enum  Season season = SPRING;
    ptr = GetSeason(season);
    printf("������ ����: %s\n", ptr);
    return 0;
}