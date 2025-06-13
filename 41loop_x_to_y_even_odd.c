#include <stdio.h>
int main()

{
    int x, y;
    printf("enter a x and y");
    scanf("%d%d", &x, &y);
    for (x; x <= y; x++)
    {
        if (x % 2 == 0)
            printf("\neven no =%d", x);
        else
            printf("\nodd=%d", x);
    }
}