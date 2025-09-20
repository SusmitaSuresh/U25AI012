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
    printf("reverse of %d is %d", temp, sum);
    return 0;
}