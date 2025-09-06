//PROGRAM TO CALCULATE SIMPLE INTEREST.
#include<stdio.h>
int main()
{
float p,r,t,si;
printf("enter the principle amount: ");
scanf("%f", &p);
printf("\nenter the rate: ");
scanf("%f", &r);
printf("\nenter the time: ");
scanf("%f", &t);
si=(p*r*t)/100;
printf("the simple interest is %f", si);
return 0;
}
