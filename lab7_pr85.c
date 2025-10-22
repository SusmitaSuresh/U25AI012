#include<stdio.h>
void vowel_or_not(char c);
int main()
{
    char c;
    printf("enter a character: ");
    scanf("%c", &c);
    vowel_or_not(c);
}
void vowel_or_not(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("%c is a vowel", c);
    }
    else if((c>64 && c<91 || c>96 && c<123))
    {
        printf("%c is not a vowel, but a consonant", c);
    }
    else
    {
        printf("%c is not an alphabet", c);
    }
}