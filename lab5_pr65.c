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
    printf("original matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}