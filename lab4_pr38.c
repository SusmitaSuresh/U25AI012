//PROGRAM TO PRINT 1,4,9,16,25,………N. 
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n", i*i);
    }
    return 0;
}
