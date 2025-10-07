//bubble sort
#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int a[50];
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("original array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("array after sorting is: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;   
}