#include<stdio.h>
int main()
{
    int i,a[50],n,s_ele,j;
    j=-1;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("enter the element you want to find: ");
    scanf("%d", &s_ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==s_ele)
        {
            j=i;
            break;
        }
    }
    if(j>0)
    {
        printf("the element %d is found at index %d", s_ele, j);
    }
    else 
    {
        printf("the element %d is not found", s_ele);
    }
    return 0;
}