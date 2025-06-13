#include <stdio.h>
int main()
{
    char ch;
    printf("enter a lowercase char");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("character is vovel");
    else
        printf("character is constant");
}
