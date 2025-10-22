#include<stdio.h>
int main()
{
    int a[3][3],i,j,k,b[3][3],result[3][3];
    printf("enter the elements: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the elements: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("matrix 1 is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("matrix 1 is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result[i][j]=0;
            for(k=0;k<3;k++)
            {          
                result[i][j]=result[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("the resultant array is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}