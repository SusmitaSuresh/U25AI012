//59) switching arrays
#include <stdio.h>
int main() {
    int a[10],b[10],c[10],i,n,temp;
    n=10;
    for (i=0;i<n;i++)
    {
        printf("enter %d element: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("enter %d element: ", i);
        scanf("%d", &b[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("the arrays after switching are: \n") ;
    for (i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t", b[i]);
    } 
    return 0;
}
