#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if (n==sum)
        printf("number is perfect");
        else
        printf("number is not perfect");
    
}