#include<stdio.h>
int main() 
{
    int i, a [50], odd, even;
    even=0;
    odd=0;
    for (i=0;i<10;i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("number of even terms is : %d\n", even);
    printf("number of odd terms is : %d", odd);
    return 0;
}
