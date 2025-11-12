#include<stdio.h>
void get_string(char string[]);
int length_string(char string[]);
int main()
{
    char string[50];
    printf("enter a string: ");
    get_string(string);
    printf("the length of the string is: %d", length_string(string));
}
void get_string(char string[])
{
    for(int i=0;i<50;i++)
    {
        scanf("%c", &string[i]);
        if(string[i]=='\n')
        {
            string[i]='\0';
            break;
        }
    }
}
int length_string(char string[])
{
    for(int i=0;i<50;i++)
    {
        static int count=0;
        if(string[i]=='\0')
        {
            return count;
        }
        else 
        {
            count++;
        }
    }
}