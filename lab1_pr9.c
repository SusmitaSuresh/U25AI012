#include<stdio.h>
int main()
{
    int sec,hr,min;
    printf("enter the hour: ");
    scanf("%d", &hr);
    printf("enter the minute: ");
    scanf("%d", &min);
    printf("enter the second: ");
    scanf("%d", &sec);
    sec=sec+(min*60)+(hr*3600);
    printf("the total time in second is: %d", sec);
    return 0;
}