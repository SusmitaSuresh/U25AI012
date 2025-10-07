#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3],add[3][3];
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
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the resultant array is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}
    