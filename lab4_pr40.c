//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ. 
#include<stdio.h>
int main()
{
    int i,num,sum;
    sum=0;
    do
    {
        printf("enter a number: ");
        scanf("%d", &num);
        printf("%d\n", num);
        sum=sum+num;
    }
    while(num>=0);
    printf("the sum is: %d", sum);
    return 0;
}