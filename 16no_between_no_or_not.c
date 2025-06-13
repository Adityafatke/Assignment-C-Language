#include<stdio.h>
int main()
{
    int firstno,middleno,lastno;
    printf("enter a three number");
    scanf("%d%d%d",&firstno,&middleno,&lastno);
    if(firstno>middleno&&firstno<lastno)
    printf("first number is between other two numbers");
    else
    printf("first number not between other two numbers");
}