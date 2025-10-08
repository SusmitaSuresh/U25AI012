#include<stdio.h>
int main() 
{
    int i, a[50],b[50],n,m;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    printf("enter the number of rotations: ");
    scanf("%d", &m);
    for (i=0;i<n;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("initial array is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    if(m>=n)
    {
        m=m%n;
    }
    for(i=0;i<n;i++)
    {
        if(i<n-m)
        {
            b[i+m]=a[i];
        }
        else
        {
            b[i+m-n]=a[i];
        }
    }
    printf("\nrotated array is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}