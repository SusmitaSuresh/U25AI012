#include<stdio.h>
int main()
{
    char character, ascii_value;
    printf("enter any character: ");
    scanf("%c", &character);
    ascii_value=(int)character;       //typecasting
    printf("the ascii value of %c is %d", character, ascii_value);
    return 0;
}