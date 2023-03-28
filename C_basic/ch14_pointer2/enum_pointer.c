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

char* GetSeason(int season) // 문자열은 무조건 포인터로 넘기고 받아야함.
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
    printf("선택한 계절: %s\n", ptr);
    return 0;
}