//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
#include<stdio.h>
int main()
{
int a,b;
printf("enter number a: ");
scanf("%d", &a);
printf("\nenter number b: ");
scanf("%d", &b);
a=a+b;
b=a-b;
a=a-b;
printf("the number a becomes: %d\n", a);
printf("the number b becomes: %d", b);
return 0;
}
