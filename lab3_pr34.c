#include<stdio.h>
int main()
{
    int i,j,k,sum,n;
    j=1;
    i=0;
    sum=0;
    printf("enter range: ");
    scanf("%d", &n);
    for(k=0;k<n;k++)
    {
        printf("%d\t", i);
        sum=i+j;
        i=j;
        j=sum;
    }
    return 0;
}