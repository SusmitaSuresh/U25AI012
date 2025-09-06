#include<stdio.h>
int main()
{
    char character, ascii_value;
    printf("enter any character: ");
    scanf("%c", &character);
    ascii_value=(int)character;         //typecasting is done here 
    if (ascii_value>=65 && ascii_value<91)
    {
        printf("the character '%c' is a capital letter", character);
    }
    else if (ascii_value>=97 && ascii_value<123)
    {
        printf("the character '%c' is a small letter", character);        
    }
    else if (ascii_value>=48 && ascii_value<58)
    {
        printf("the character '%c' is a digit", character);        
    }
    else
    {
        printf("the character '%c' is a special symbol", character);        
    }
    return 0;
}