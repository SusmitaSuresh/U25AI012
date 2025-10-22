#include<stdio.h>
void even_or_odd(int n);
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    even_or_odd(n);
}
void even_or_odd(int n)
{
    if(n%2==0)
    {
        printf("the number %d is even", n);
    }
    else 
    {
        printf("the number %d is odd", n);
    }
}