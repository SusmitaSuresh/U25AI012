#include<stdio.h>
int main()
{
    float x,y;
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    printf("enter value of x: ");
    scanf("%f", &x);
    switch (n)
    {
        case 1:
            y=1+x;
            printf("value of y is: %f", y);
            break;
        case 2:
            y=1+x/2;
            printf("value of y is: %f", y);
            break;
        case 3:
            y=1+x*x*x;
            printf("value of y is: %f", y);
            break;
        default:
            y=1+n*x;
            printf("value of y is: %f", y);
            break;
    }
    return 0;
}