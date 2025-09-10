#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter third number: ");
    scanf("%d", &c);
    if (a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest", a);
        }
        else
        {
            printf("%d is the greatest", c);
        }
    }
    else 
    {
        if(b>c)
        {
            printf("%d is the greatest", b);
        }
        else
        {
            printf("%d is the greatest", c);
        }
    }
    return 0;
}