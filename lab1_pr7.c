//PROGRAM TO CALCULATE AREA OF A TRIANGLE.
#include<stdio.h>
#include<math.h>
int main()
{
float s1,s2,s3,area,s;
printf("enter side1: ");
scanf("%f", &s1);
printf("enter side2: ");
scanf("%f", &s2);
printf("enter side3: ");
scanf("%f",&s3);
s=(s1+s2+s3)/2.0;
area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
printf("the area is: %f", area);
return 0;
}