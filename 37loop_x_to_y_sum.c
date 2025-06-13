#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("enter a x and y");
    scanf("%d%d",&x,&y);
    for(x;x<=y;x++)
    sum+=x;
    printf("\nsum=%d",sum);
}