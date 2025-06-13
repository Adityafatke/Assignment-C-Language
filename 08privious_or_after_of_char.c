#include<stdio.h>
int main()
{
    char ch,temp;
    printf("enter a char ");
    scanf("%c",&ch);
    temp=ch;
    printf("given char=%c\nprivious char=%c",ch,ch++);
    printf("\nprivious char=%c",--temp);
}