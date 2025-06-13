#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,n3;
    printf("enter a three number");
    scanf("%d%d%d",&n1,&n2,&n3);

 //---------------------logic 1--------------------------   
    if(n1>n2&&n1>n3)
    printf("max no=%d",n1);
    if(n2>n1&&n2>n3)
    printf("max no=%d",n2);
    else
    printf("max no=%d",n3);

    //----------------------logic 2--------------------------

   int result=fmax(n1,fmax(n2,n3));
   printf("\n max no =%d",result);

}