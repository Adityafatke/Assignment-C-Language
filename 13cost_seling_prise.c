#include <stdio.h>
int main()
{
    int costp, sellingp, profit = 0;
    printf("enter cost prise");
    scanf("%d", &costp);
    printf("enter a selling prise");
    scanf("%d", &sellingp);
    profit =costp - sellingp;

    if (sellingp>costp)
        printf("seller made profit=%d",sellingp-costp);
    else
        printf("seller made loss=%d", sellingp - costp);
}