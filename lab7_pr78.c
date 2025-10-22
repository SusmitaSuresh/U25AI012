#include<stdio.h>
#include<math.h>
int armstrong(int n, int a);
int count(int n, int co);
int main()
{
    int n, a=1, co=0;
    printf("enter a number: ");
    scanf("%d", &n);
    co= count(n, co);
    if(armstrong(n,co)==n)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
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
int armstrong(int n, int co)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return pow(n%10, co)+armstrong(n/10, co);
    }
}