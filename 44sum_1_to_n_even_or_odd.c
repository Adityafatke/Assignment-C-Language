#include<stdio.h>
int main()
{
    int i,osum=0,esum=0,n;
    printf("enter a n number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
      esum+=i;
    else
     osum+=i;
    }
    printf("sum of even no=%d\nsum of even no=%d",esum,osum);
} 