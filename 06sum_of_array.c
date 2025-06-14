#include<stdio.h>
int main()
{
    int a[100],i,sum=0,n;
    printf("how many number you want to enter");
    scanf("%d",&n);
    printf("enter a number");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=n;i++)
    sum+=a[i];

    printf("sum of all array element=%d",sum);

}