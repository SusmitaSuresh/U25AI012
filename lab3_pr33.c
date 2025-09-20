#include<stdio.h>
int main()
{
    int a[100],i,n,temp,j;
    printf("enter number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter element: ");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0)
        {
        if(a[j-1]>a[j])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        j--;
        }
    }
    printf("max of these numbers is: %d\n", a[n-1]);
    printf("min of these numbers is: %d", a[0]);
    return 0;
}