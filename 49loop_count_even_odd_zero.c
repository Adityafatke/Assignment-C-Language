#include<stdio.h>
int main()
{
    int no,n,zerocount=0,i,evencount=0,oddcount=0;
      printf("enter a n number");
    scanf("%d",&n);
    while(n>0)
    {   
        no=n%10;
        if(no%2==0)
        evencount++;
        else
        oddcount++;
        if(no==0)
        zerocount++;
        n/=10;
    }
    printf("\ncount of even digits=%d",evencount);
    printf("\ncount of odd digits=%d",oddcount);
    printf("\ncount of zero digits=%d",zerocount);
}