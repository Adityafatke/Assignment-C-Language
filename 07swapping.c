#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    a=a+b;//10 //20
    b=a-b;
    a=a-b;
    printf("%d%d",a,b);
}