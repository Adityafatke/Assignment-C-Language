#include<stdio.h>
int main()
{
    int i,j,no=5;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",no);
            no--;
        }
        printf("\n");
        no=5;

    }
}