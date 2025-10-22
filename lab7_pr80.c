#include<stdio.h>
int fibonacci(int n, int n1, int n2);
int main()
{
    int n, n1=0, n2=1;
    printf("enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n,n1,n2);
}
int fibonacci(int n, int n1, int n2)
{
    int newt;
    if(n>0)
    {
        newt=n1;
        n1=n2;  
        n2=newt+n2;
        printf("%d\t", newt);
        n--;
        fibonacci(n,n1,n2);
    }
    else
    {
        return 0;
    }
}
