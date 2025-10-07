//58) PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD
#include <stdio.h>
int main() {
    int a[10],b[10],c[10],i,n;
    n=10;
    for (i=0;i<n;i++)
    {
        printf("enter %d element: ", i);
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("enter %d element: ",i);
        scanf("%d", &b[i]);
    }
    for (i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("sum of both arrays is: ") ;
    for (i=0;i<n;i++)
    {
        printf("%d\t", c[i]);
    } 
    return 0;
}
