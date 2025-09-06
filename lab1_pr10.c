#include <stdio.h>
int main ()
{
int p,m,c,e;
float cm;
printf("enter math marks out of 200: ");
scanf("%d",&m);
printf("enter physics marks out of 200: ");
scanf("%d", &p);
printf("enter chemistry marks out of 200: ");
scanf("%d", &c);
printf ("enter entrance exam marks out of 100:" );
scanf("%d", &e);
cm = (m+p+c)/2.0+e;
printf("the cut off marks of student is: %f", cm);
return 0;
}