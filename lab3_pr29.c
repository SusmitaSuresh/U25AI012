#include<stdio.h>
int main()
{
    int num,sum,a,b,temp;
    sum=0;
    printf("enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
        a=num%10;
        sum=(sum*10)+a;
        num=num/10;
    }
    if(sum==temp)
    {
        printf("%d is a palindrome", temp);
    }
    else 
    {
        printf("%d is not a palindrome", temp);
    }
    return 0;
}