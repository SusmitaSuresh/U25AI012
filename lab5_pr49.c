#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(j= 1;j<2*i;j++)
        {
            if(j%2==0)
            {
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}