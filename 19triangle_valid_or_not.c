#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter a triangle three sides");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3&&s1+s3>s2&&s2+s3>s1)
    printf("triangle is valid");
    else
    printf("triangle is not valid");
}