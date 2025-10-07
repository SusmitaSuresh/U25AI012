#include<stdio.h>
int main() 
{
    int i, a [50], positive, negative, zero;
    positive=0;
    negative=0;
    zero=0;
    for (i=0;i<10;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &a[i]);
        if(a[i]>0)
        {
            positive=positive+1;
        }
        else if(a[i] ==0)
        {
            zero=zero+1;
        }
        else
        {
            negative=negative+1;
        } 
    }
    printf("number of positive terms is : %d\n", positive);
    printf("number of negative terms is : %d\n", negative);
    printf("number of zero terms is : %d", zero);
    return 0;
}
