#include<stdio.h>
int interchange(int a, int b);
int main()
{
    int a,b;
    printf("enter two numbers a and b: ");
    scanf("%d%d", &a, &b);
    printf("the values of a and b are: a=%d and b=%d\n", a, b);
    interchange(a,b);
    return 0;
}
int interchange(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the interchanged values of a and b are: a=%d and b=%d", a, b);
}
