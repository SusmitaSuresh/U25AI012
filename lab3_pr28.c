#include<stdio.h>
int main()
{
    int num,sum,a,temp;
    sum=0;
    printf("enter a 3 digit number: ");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
        a=num%10;
        sum=sum+(a*a*a);
        num=num/10;
    }
    if(sum==temp)
    {
        printf("%d is an armstrong number", temp);
    }
    else
    {
        printf("%d is not an armstrong number", temp);
    }
    return 0;
}