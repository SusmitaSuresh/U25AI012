#include<stdio.h>
int main()
{
    int num;
    printf("enter a random number: ");
    scanf("%d", &num);
    num%2==0 ? printf("the number %d is even", num) : printf("the number %d is odd", num);
    return 0;
}