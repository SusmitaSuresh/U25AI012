#include<stdio.h>
int main()
{
    int fact,n;
    fact=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d is the factorial", fact);
    return 0;
}
