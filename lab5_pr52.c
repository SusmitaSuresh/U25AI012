#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<5;i++)
    {
        for(j=4;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d", k);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}