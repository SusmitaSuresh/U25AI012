//sum of rows
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the elements: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of %d row is: %d\n", i+1,sum);
        sum=0;
    }
    return 0;
}