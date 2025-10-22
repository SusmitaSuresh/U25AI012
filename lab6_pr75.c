#include<stdio.h>
int main()
{
    int a[10][5], i,j,k,l,temp;
    for(i=0;i<10;i++)    
    {
        printf("enter student %d's roll no: ", i+1);
        scanf("%d", &a[i][0]);
        a[i][4]=0;
        for(j=1;j<4;j++)
        {
            printf("enter subject %d marks: ", j);
            scanf("%d", &a[i][j]);
            a[i][4]=a[i][4]+a[i][j];
        }
    }
    for(j=1;j<5;j++)
    {
        for(i=1;i<10;i++)
        {
            for(k=i; k>0; k--)
            {
                if(a[k][j]<a[k-1][j])
                {
                    for(l=0;l<5;l++)
                    {
                        temp=a[k][l];
                        a[k][l]=a[k-1][l];
                        a[k-1][l]=temp;
                    }
                }
            }
        }
        if(j<4)
        {
            printf("\nmax of subject %d is: %d and has been obtained by roll no. %d", j, a[9][j], a[9][0]);
        }
        else
        {
            printf("\nmax of total marks is: %d and has been got by roll no. %d", a[9][j], a[9][0]);
        }
    }
}
