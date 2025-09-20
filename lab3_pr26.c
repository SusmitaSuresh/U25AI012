#include<stdio.h>
int main()
{
    int i,even,odd,n;
    printf("enter a number: ");
    scanf("%d", &n);
    even=0;
    odd=0;
    for (i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }
    }
    printf("the sum of even terms b/w 1 to %d is: %d\n", n, even);
    printf("the sum of odd terms b/w 1 to %d is: %d", n, odd);
    return 0;
}