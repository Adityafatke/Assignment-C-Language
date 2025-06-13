#include<stdio.h>
int main()
{
    int no;
    printf("enter a number");
    scanf("%d",&no);
    if(no%5==0&&no%7==0)
    printf("number is divisible by 5 and 7 =%d",no);
    else
    printf("number is not divisible by 5 and 7=%d",no);
}