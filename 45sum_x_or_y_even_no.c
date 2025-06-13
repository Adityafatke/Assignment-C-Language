#include <stdio.h>
int main()
{
    int osum = 0, esum = 0, x, y;
    printf("enter a x and y number");
    scanf("%d%d", &x, &y);
    for (x; x <=y; x++)
    {
        if (x % 2 == 0)
            esum += x;
        else
            osum += x;
    }
    printf("sum of even no=%d\nsum of even no=%d", esum, osum);
}