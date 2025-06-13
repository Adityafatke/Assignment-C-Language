#include <stdio.h>
int main()
{
    int year;
    printf("enter a year");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 && year % 400 != 0)  //2088,1928/
    printf("given year is leap year");
    else
    printf("given year is not leap year");
    return 0;
}