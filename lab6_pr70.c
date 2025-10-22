#include<stdio.h>
int main()
{
    int i,a[50],n,s_ele,j;
    j=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("enter the element you want to find occurence of: ");
    scanf("%d", &s_ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==s_ele)
        {
            j++;
        }
    }
    printf("the element %d occurs %d times", s_ele, j);
    return 0;
}