#include<stdio.h>
int main()
{
    int i,osum=0,esum=0;
    for(i=100;i<=200;i++)
    {
    if(i%2==0)
      esum+=i;
    else
     osum+=i;
    }
    printf("sum of even no=%d\nsum of even no=%d",esum,osum);

} 