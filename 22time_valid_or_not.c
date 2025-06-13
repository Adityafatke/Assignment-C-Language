#include<stdio.h>
int main()
{
    int hours,minute,second;
    printf("enter a hours,minutes,second");
    scanf("%d%d%d",&hours,&minute,&second);
    
    if(hours>0&&hours<24) 
    {
        if(minute>0&&minute<60)
        {
            if(second>0&&second<60)
            {
                printf("time is valid");
            }
            else
            printf("second are invalid");
        }
        else
        printf("minutes are invalid");
    }
    else
    printf("time is invalid");
}