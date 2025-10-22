//81) WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE. 
#include<stdio.h>
int prime_or_not(int n, int i);
int main()
{
    int n, i=2;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("%d", prime_or_not(n,i));
}
int prime_or_not(int n, int i)
{
    if(n%i==0)
    {
        return 0;
    }
    if(i>n/2)
    {
        return 1;
    }
    else
    {
        prime_or_not(n,i+1);
    }
}        
