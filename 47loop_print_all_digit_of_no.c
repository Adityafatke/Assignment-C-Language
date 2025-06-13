#include<stdio.h>
int main()
{
    int no,digit=0;
    printf("enter a number ");
    scanf("%d",&no);
    while(no>0)
    {
        printf("\nseparate digit=%d",no%10);
        no/=10;
     }
}