#include<stdio.h>
#include<math.h>
int count(int n, int co);
int reverse_number(int n, int a);
int main()
{
    int n, co=0, a, sum=0;
    printf("enter a number: ");
    scanf("%d", &n);
    co=count(n, co);
    a=pow(10, co-1);
    if(reverse_number(n,a)==n)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
int count(int n, int co)
{
    if(n==0)
    {
        return co;
    }
    else 
    {
        co++;
        count(n/10, co);
    }
}
int reverse_number(int n, int a)
{
    int sum;
    if(n==0)
    {
        return 0;
    }
    else
    {  
        sum = ((n%10)*a+(reverse_number(n/10,a/10)));
        printf("%d\n", sum);
        return sum;
    }
}