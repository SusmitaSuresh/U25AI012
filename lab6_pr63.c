#include<stdio.h>
int main()
{
    int a[3][3],i,j,k,sum=0,temp;
    printf("enter the elements: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nthe matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=j-1;k>=0;k--)
            {
                if(a[i][k]>a[i][k+1])
                {
                   temp=a[i][k];
                   a[i][k]=a[i][k+1];
                  a[i][k+1]=temp;
                }
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=j-1;k>=0;k--)
            {
                if(a[k][i]>a[k+1][i])
                {
                    temp=a[k][i];
                    a[k][i]=a[k+1][i];
                    a[k+1][i]=temp;
                }
            }    
        }
    }
    printf("\nmaximum element is: %d", a[2][2]);
    printf("\nminimum element is: %d", a[0][0]);
    return 0;
}