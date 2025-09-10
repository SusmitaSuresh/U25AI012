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
    a>b&&a>c ? printf("%d is the greatest", a): b>c&&b>a ? printf("%d is the greatest", b): printf("%d is the greatest", c);
    return 0;
}
