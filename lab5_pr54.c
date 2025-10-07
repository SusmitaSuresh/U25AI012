#include<stdio.h>
int main() 
{
    int i, a [50], sum;
    sum = 0;
    for (i=0;i<10;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &a[i]);
        sum =sum+a[i];
    }
    printf("Sum of numbers is : %d", sum) ;
    return 0;
}
