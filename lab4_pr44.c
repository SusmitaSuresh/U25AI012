#include<stdio.h>
int main()
{
    int units;
    float charge;
    printf("enter number of units consumed: ");
    scanf("%d", &units);
    if(units>0 && units<201)
    {
        charge=0.5*units;
        printf("the charge is: %f", charge);
    }
    else if(units>200 && units<401)
    {
        charge=100+ 0.65*(units-200);
        printf("the charge is: %f", charge);
    }
    else if(units>400 && units<601)
    {
        charge=230+0.80*(units-400);
        printf("the charge is: %f", charge);
    }
    else
    {
        charge=425+1.25*(units-600);
        printf("the charge is: %f", charge);
    }
    return 0;
}