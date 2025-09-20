// PROGRAM TO PRINT 1,3,5,7,9………N.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}