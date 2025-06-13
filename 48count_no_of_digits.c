#include<stdio.h>
int main()
{
    int n,count=0,i;
      printf("enter a n number");
    scanf("%d",&n);
    while(n>0)
    {
    count++;
    n/=10;
    }
    printf("count of digits=%d",count);
}