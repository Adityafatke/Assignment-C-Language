#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter a char");
    scanf("%c",&ch);
    if(tolower(ch)>='a'&&tolower(ch)<='z')
    {
        printf("given character is lowercase letter");
     }
     else if(toupper(ch)>='A'&&toupper(ch)>='Z')
     {
        printf("given char is uppercase letter");
     }
     else{
        printf("given char is number");
     }
}