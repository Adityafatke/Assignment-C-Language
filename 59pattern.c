#include <stdio.h>
int main()
{
    int i, j,no=1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
           printf("%d",no);
           no++;
        }
        no=1;
        printf("\n");
    }
}