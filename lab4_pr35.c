#include<stdio.h>
int main ()
{
    int num,q, sum=0; printf("enter a number: "); 
    scanf("%d", &num);
    while (num != 0)
    {
        while (num!=0)
        {
            q=num%10;
            sum=sum+q;
            num=num/10;
        }
        if (sum >9)
        {
        num=sum;
        sum=0;
        }
    }
    printf("sum of digits is %d", sum);
    return 0;
}
