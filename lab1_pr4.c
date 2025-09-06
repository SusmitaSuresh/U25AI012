//PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
#include<stdio.h>
int main()
{
float f,c;
printf("enter the temparature in faranheit: ");
scanf("%f", &f);
c=((f-32)*5)/9;
printf("the temparature in centigrade is: %f", c);
return 0;
}