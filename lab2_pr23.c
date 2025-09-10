#include<stdio.h>
int main()
{
    int i, base, pow, answer;
    answer=1;
    printf("enter the base value: ");
    scanf("%d", &base);
    printf("enter the power: ");
    scanf("%d", &pow);
    for (i=1; i<=pow; i++)
    {
        answer=answer*base;
    }
    printf("the answer is: %d", answer);
    return 0;
}