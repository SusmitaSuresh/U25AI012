#include<stdio.h>
long factorial(int n);
int main()
{
    int n, r, i=2;
    give_input:
    printf("enter numbers n and r: ");
    scanf("%d%d", &n, &r);
    if(n<0||r<0||n<r)
    {
        printf("invalid choice, try again.");
        goto give_input;
    }
    printf("%d C %d is equal to: %ld", n, r, factorial(n)/(factorial(r)*factorial(n-r)));
}
long factorial(int n)
{
    if(n==0)
    {
    return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}