//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES
#include<stdio.h>
int main()
{
    double sec=31558150;
    int min=sec/60;
    int hr=min/60;
    int day=hr/24;
    min=min-(60*hr);
    hr=hr-(day*24);
    printf("the period of the earth's revolution is %d days, %d hours, and %d minutes", day,hr,min);
    return 0;
}