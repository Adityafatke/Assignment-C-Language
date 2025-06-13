#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter a number and operator");
    scanf("%d%c%d",&a,&op,&b);
    switch (op)
    {
        case '+':printf("addition=%d",a+b);
        break;

         case '-':printf("subtraction=%d",a-b);
        break;

         case '*':printf("multiplication=%d",a*b);
        break;
    
         case '/':printf("division=%d",a/b);
        break;

         case '%':printf("reminder=%d",a%b);
        break;
        default:printf("please  enter a valid operator");
        break;
    }
}