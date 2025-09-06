// PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include<stdio.h>
int main()
{
    int min,sec,hr;
    printf("Enter the number of seconds: ");
    scanf("%d",&sec);
    min=sec/60;
    hr=min/60;
    sec=sec-(60*min);
    min=min-(hr*60);
    printf("The time is %d hours, %d minutes and %d seconds", hr, min, sec);
    return 0;
}