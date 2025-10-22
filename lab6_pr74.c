#include<stdio.h>
void get_array(int n, int res[]);
void print_array(int n, int res[]);
void sorted_array(int n, int res[]);
int main()
{
    int a[50],b[50],res[50],i,j,n,m,x;
    x=1;
    printf("enter the number of elements of array 1 and 2: ");
    scanf("%d%d" ,&n,&m);
    printf("enter array 1: ");
    get_array(n, a);
    printf("enter array 2: ");
    get_array(m, b);
    printf("array 1 is: \n");
    print_array(n, a);
    printf("\narray 2 is: \n");
    print_array(m, b);  
    for(i=0,j=0; i<n,j<m ;i++,j++)
    {
       if(i<n)
       {
       res[x-1]=a[i];
       sorted_array(x, res);
       x++;
       }
       if(j<m)
       {
       res[x-1]=b[j];
       sorted_array(x, res);
       x++;
       }
    }
    printf("\nthe resultant sorted array is: \n");
    print_array(n+m, res);
}
void get_array(int n, int res[])
{
    int i;
    for(i=0;i<n;i++)
    {   
        scanf("%d", &res[i]);
    }
}
void print_array(int n, int res[])
{
    int i;
    for(i=0;i<n;i++)
    {   
        printf("%d\t", res[i]);
    }
}
void sorted_array(int x, int res[])
{
    int i,j,temp;
    for(i=0;i<x;i++)
    {
        for(j=x-1;j>0;j--)
        if(res[j]>res[j-1])
        {
            break;
        }
        else if(res[j]<res[j-1])
        {
            temp=res[j-1];
            res[j-1]=res[j];
            res[j]=temp;
        }
    }
}