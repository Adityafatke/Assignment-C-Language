
#include<stdio.h>
int main()
{
    int no,rev=0,rem=0;
    printf("enter a n number");
    scanf("%d",&no);
    while(no>0)
    {
      rem=no%10;
      rev=rev*10+rem;
      no/=10;
    }
    
    printf("\nreverce number=%d",rev);
}