#include<stdio.h>
int main()
{
    char character;
    printf("enter any character: ");
    scanf("%c", &character);
    if (character>='a'&& character<='z')
    {
        printf("the character '%c' is a small letter", character);        
    }
    else
    {
        printf("%c is not a small case letter", character);
    }
    return 0;
}