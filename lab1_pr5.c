//PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE.
#include<stdio.h>
int main()
{
int var1, var2, temp;
printf("enter first number: ");
scanf("%d", &var1);
printf("enter second number: ");
scanf("%d", &var2);
temp=var1;
var1=var2;
var2=temp;
printf("the first number becomes: %d \n", var1);
printf("the second number becomes: %d", var2);
return 0;
}