//1634,153,singke digit numbers are armstrong.
#include<stdio.h>
int main()
{
    int num,sum,a,temp,dig,i,q;
    sum=0;
    dig=0;
    q=1;
    printf("enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
        dig=dig+1;
        num=num/10;
    }
    num=temp;
    while(num!=0)
    {
        a=num%10;
        for(i=0;i<dig;i++)
        {
            q=q*a;
        }
        sum=sum+q;
        q=1;
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