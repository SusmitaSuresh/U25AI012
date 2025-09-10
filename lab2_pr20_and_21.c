#include<stdio.h>
int main()
{
    float num1, num2, value;
    char operation;
    printf("enter the operation to be done (+,-,*,/): ");
    scanf("%c", &operation);
    printf("enter the number 1: ", num1);
    scanf("%f", &num1);
    printf("enter the number 2: ", num2);
    scanf("%f", &num2);
    switch (operation)
    {
        case '+':
        printf("%f+%f=%f", num1, num2, num1+num2);
        break;
        case '-':
        printf("%f-%f=%f", num1, num2, num1-num2);
        break;
        case '*':
        printf("%f*%f=%f", num1, num2, num1*num2);
        break;
        case '/':
        printf("%f/%f=%f", num1, num2, num1/num2);
        break;
    }
    return 0;
}