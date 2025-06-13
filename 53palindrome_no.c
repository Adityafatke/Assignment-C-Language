
#include<stdio.h>
int main()
{
    int no,rev=0,rem=0,temp=0;
    printf("enter a n number");
    scanf("%d",&no);
    temp=no;
    while(no>0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no/=10;
    }
if(temp==rev)
printf("number is palindrome");
else
printf("number is not palindrome");
}