#include<stdio.h>
int main()
{
    int no, i,sum=0;
    printf("enter a n number");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    sum+=i;
    printf("\nsum of digit=%d",sum);
}