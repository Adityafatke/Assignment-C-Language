#include<stdio.h>
int main()
{
    int no;
    printf("entyer a number");
    scanf("%d",&no);
    if (no%5==0||no%7==0)
    printf("number is divisible by 5 and 7");
    else
    printf("not divisible by 5 and 7");
}