//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE.
#include<stdio.h>
int main()
{
int m1, m2, m3, m4, m5, total;
float percent;
printf("input first subject marks: ");
scanf("%d", &m1);
printf("\ninput second subject marks: ");
scanf("%d", &m2);
printf("\ninput third subject marks: ");
scanf("%d", &m3);
printf("\ninput fourth subject marks: ");
scanf("%d", &m4);
printf("\ninput fifth subject marks: ");
scanf("%d", &m5);
total=m1+m2+m3+m4+m5;
printf("\nthe total is: %d", total);
percent=(total)/5;
printf("\nthe percentage is: %f", percent);
return 0;
}