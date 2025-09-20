#include<stdio.h>
int main()
{
    float sum,fact,term;
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    sum=0;
    fact=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<i; j++)
        {
            fact=fact*j;
        }
        term=1/fact;
        sum=sum+term;
        fact=1;
    }
    printf("the sum is: %f", sum);
    return 0;
}