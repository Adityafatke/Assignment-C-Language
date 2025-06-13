
#include<stdio.h>
#include<math.h>
int main()
{
    int no, i,count=0,temp=0,rem=0,result=0;  //no chya prytek digit chya qube chi adddition number evdhi aali pahije
    printf("enter a n number");
    scanf("%d",&no);
    temp=no;
    while(no>0)
    {
        count++;
        no/=10;
    }
    no=temp;
    while(no>0)
    {
        rem=no%10;
        result+=pow(rem,count);
        no/=10;
}
if(temp==result)
printf(" number is armstrong no =%d",result);
else
printf("number is not armstrong");    
}