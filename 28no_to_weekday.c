#include<stdio.h>
int main()
{
    int wno;
    printf("enter a week number");
    scanf("%d",&wno);
    switch(wno)
    {
        case 1:printf("monday");
        break;
         case 2:printf("tuesday");
        break;
         case 3:printf("wednesday");
        break;
         case 4:printf("thursday");
        break;
         case 5:printf("friday");
        break;
         case 6:printf("saturday");
        break;
         case 7:printf("sunday");
        break;
        default:printf("invalid week days");
        break;
    }
}