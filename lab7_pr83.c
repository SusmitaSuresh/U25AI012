#include<stdio.h>
int get_array(int n,int a[]);
int sort_array(int n,int a[]);
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    get_array(n,a);
    printf("array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    sort_array(n,a);
    printf("\nmaximum of this array is: %d", a[n-1]);
}
int get_array(int n,int a[])
{
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
}
int sort_array(int n,int a[])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
