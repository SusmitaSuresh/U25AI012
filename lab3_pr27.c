#include<stdio.h>
int main()
{
    int num,i,flag;
    flag=0;
    printf("enter a number: ");
    scanf("%d", &num);
    for(i=2;i<=num/2 && flag==0;i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        if(num==1)
        {
            printf("1 is neither prime nor composite");
        }
        else
        {
            printf("%d is a prime number", num);
        }
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    return 0;
}