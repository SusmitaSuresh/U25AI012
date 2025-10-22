#include<stdio.h>
int main()
{
    int i,a[50],n,temp;
    printf("enter number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter element: ");
        scanf("%d", &a[i]);
    }
    printf("array before reversing is: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n");
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("the array after reversing is: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
}