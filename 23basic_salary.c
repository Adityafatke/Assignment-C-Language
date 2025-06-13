#include<stdio.h>
int main()
{
    int salary,tax;
    printf("enter your annual salary");
    scanf("%d",&salary);
    if (salary<=150000)
        printf("your salary is tax free");
       else if (salary>150000||salary<300000)
        {
            tax=salary*20/100;
            printf("tax=%d",tax);
        }
          else if (salary>=300000)
            {            
                tax=salary*30/100;
                printf("tax=%d",tax);
            }
            
    
}